#include "main.h"

// TOOD: ENFORCE MUTUAL EXCLUSION
// TODO: DO NOT EXPOSE A POINTER TO THE CLIENT BUFFER

pthread_mutex_t zeromq_pthreadmutexRunning = PTHREAD_MUTEX_INITIALIZER;

void* zeromq_socketHandle = NULL;

bool zeromq_boolConnected = false;
char zeromq_charClient[256] = { };

void zeromq_thread() {
	{
		void* contextHandle = zmq_ctx_new();
		void* socketHandle = zmq_socket(contextHandle, ZMQ_PAIR);
		
		{
			char charZeromq[1024] = { };
			
			sprintf(charZeromq, "tcp://localhost:%d", main_intZeromq);
			
			if (zmq_connect(socketHandle, charZeromq) == -1) {
				printf("zeromq: %s\n", zmq_strerror(zmq_errno()));
			}
		}
		
		{
			zeromq_socketHandle = socketHandle;
		}
		
		{
			void* monitorHandle = zmq_socket(contextHandle, ZMQ_PAIR);
			
			{
				if (zmq_socket_monitor(socketHandle, "inproc://minichess-zeromq-monitor", ZMQ_EVENT_ALL) == -1) {
					printf("zeromq: %s\n", zmq_strerror(zmq_errno()));
				}
				
				if (zmq_connect(monitorHandle, "inproc://minichess-zeromq-monitor") == -1) {
					printf("zeromq: %s\n", zmq_strerror(zmq_errno()));
				}
			}
			
			{
				do {
					zmq_event_t zmqeventHandle = { };
					
					{
						zmq_msg_t zmqmsgHandle = { };
						
						zmq_msg_init(&zmqmsgHandle);
						
						if (zmq_recvmsg(monitorHandle, &zmqmsgHandle, 0) == -1) {
							printf("zeromq: %s\n", zmq_strerror(zmq_errno()));
						}
						
						memcpy(&zmqeventHandle, zmq_msg_data(&zmqmsgHandle), sizeof(zmqeventHandle));
						
						zmq_msg_close(&zmqmsgHandle);
					}
					
					{
						if (zmqeventHandle.event == ZMQ_EVENT_CONNECTED) {
							{
								zeromq_boolConnected = true;
								
								webserver_broadcast("zeromq_status", NULL);
							}
							
							{
								cJSON* cjsonOut = cJSON_CreateObject();
								cJSON* cjsonIn = NULL;
								
								{
									cJSON_AddStringToObject(cjsonOut, "strFunction", "ping");
								}
								
								{
									zeromq_send(cjsonOut);
									
									cjsonIn = zeromq_recv();
								}
								
								{
									strcpy(zeromq_charClient, cJSON_GetObjectItem(cjsonIn, "strOut")->valuestring);
									
									webserver_broadcast("zeromq_name", NULL);
								}
								
								cJSON_Delete(cjsonOut);
								cJSON_Delete(cjsonIn);
							}
							
							{
								printf("zeromq: connected to %s\n", zeromq_charClient);
							}
							
						} else if (zmqeventHandle.event == ZMQ_EVENT_DISCONNECTED) {
							{
								zeromq_boolConnected = false;
								
								webserver_broadcast("zeromq_status", NULL);
							}
							
							{
								printf("zeromq: disconnected from %s\n", zeromq_charClient);
							}
							
						}
					}
					
					{
						if (zmqeventHandle.event == ZMQ_EVENT_CONNECTED) {
							int intTest = 0;
							
							if (intTest > 0) {
								setbuf(stdout, NULL);
							}
							
							if (intTest > 0) {
								printf("test_board: ");
								printf("%d\n", test_board());
							}
							
							if (intTest > 1) {
								printf("test_winner: ");
								printf("%d\n", test_winner());
							}
							
							if (intTest > 2) {
								printf("test_isValid: ");
								printf("%d\n", test_isValid());
							}
							
							if (intTest > 3) {
								printf("test_isEnemy: ");
								printf("%d\n", test_isEnemy());
							}
							
							if (intTest > 4) {
								printf("test_isOwn: ");
								printf("%d\n", test_isOwn());
							}
							
							if (intTest > 5) {
								printf("test_isNothing: ");
								printf("%d\n", test_isNothing());
							}
							
							if (intTest > 6) {
								printf("test_eval: ");
								printf("%d\n", test_eval());
							}
							
							if (intTest > 7) {
								printf("test_moves: ");
								printf("%d\n", test_moves());
							}
							
							if (intTest > 8) {
								printf("test_move: ");
								printf("%d\n", test_move());
							}
							
							if (intTest > 9) {
								printf("test_undo: ");
								printf("%d\n", test_undo());
							}
							
							if (intTest > 10) {
								printf("test_movesShuffled: ");
								printf("%d\n", test_movesShuffled());
							}
							
							if (intTest > 11) {
								printf("test_movesEvaluated: ");
								printf("%d\n", test_movesEvaluated());
							}
							
							if (intTest > 12) {
								printf("test_moveRandom: ");
								printf("%d\n", test_moveRandom());
							}
							
							if (intTest > 13) {
								printf("test_moveGreedy: ");
								printf("%d\n", test_moveGreedy());
							}
							
							if (intTest > 14) {
								printf("test_moveNegamax: ");
								printf("%d\n", test_moveNegamax());
							}
							
							if (intTest > 15) {
								printf("test_moveAlphabeta: ");
								printf("%d\n", test_moveAlphabeta());
							}
						}
					}
				} while (pthread_mutex_trylock(&zeromq_pthreadmutexRunning) != 0);
				
				pthread_mutex_unlock(&zeromq_pthreadmutexRunning);
			}
			
			zmq_close(monitorHandle);
		}
		
		zmq_close(socketHandle);
		zmq_ctx_destroy(contextHandle);
	}
}

void zeromq_start() {
	{
		zeromq_socketHandle = NULL;
	}
	
	{
		zeromq_boolConnected = false;
		
		zeromq_charClient[0] = '\0';
	}
	
	{
		pthread_mutex_init(&zeromq_pthreadmutexRunning, NULL);
		
		pthread_mutex_lock(&zeromq_pthreadmutexRunning);
	}
	
	{
		pthread_t pthreadHandle = 0;
		
		pthread_create(&pthreadHandle, NULL, (void*) (zeromq_thread), NULL);
	}
}

void zeromq_stop() {
	{
		pthread_mutex_unlock(&zeromq_pthreadmutexRunning);
		
		pthread_mutex_destroy(&zeromq_pthreadmutexRunning);
	}
}

bool zeromq_connected() {
	return zeromq_boolConnected;
}

char* zeromq_name() {
	return zeromq_charClient;
}

void zeromq_send(cJSON* cjsonHandle) {
	{
		assert(zeromq_connected() == true);
	}
	
	{
		char* charJson = cJSON_PrintUnformatted(cjsonHandle);
		
		if (zmq_send(zeromq_socketHandle, charJson, strlen(charJson), 0) == -1) {
			printf("zeromq: %s\n", zmq_strerror(zmq_errno()));
		}
		
		free(charJson);
	}
}

cJSON* zeromq_recv() {
	cJSON* cjsonHandle = NULL;
	
	{
		assert(zeromq_connected() == true);
	}
	
	{
		char charJson[1024] = { };
		
		if (zmq_recv(zeromq_socketHandle, charJson, sizeof(charJson), 0) == -1) {
			printf("zeromq: %s\n", zmq_strerror(zmq_errno()));
		}
		
		cjsonHandle = cJSON_Parse(charJson);
	}
	
	return cjsonHandle;
}
