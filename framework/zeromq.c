#include "main.h"

// TOOD: ENFORCE MUTUAL EXCLUSION
// TODO: DO NOT EXPOSE A POINTER TO THE CLIENT BUFFER

pthread_mutex_t zeromq_objectRunning = PTHREAD_MUTEX_INITIALIZER;

void* zeromq_objectSocket = NULL;

bool zeromq_boolConnected = false;
char zeromq_charClient[256] = { };

void zeromq_thread() {
	{
		void* objectContext = zmq_ctx_new();
		void* objectSocket = zmq_socket(objectContext, ZMQ_PAIR);
		
		{
			char charZeromq[1024] = { };
			
			sprintf(charZeromq, "tcp://localhost:%d", main_intZeromq);
			
			if (zmq_connect(objectSocket, charZeromq) == -1) {
				printf("zeromq: %s\n", zmq_strerror(zmq_errno()));
			}
		}
		
		{
			zeromq_objectSocket = objectSocket;
		}
		
		{
			void* objectMonitor = zmq_socket(objectContext, ZMQ_PAIR);
			
			{
				if (zmq_socket_monitor(objectSocket, "inproc://minichess-zeromq-monitor", ZMQ_EVENT_ALL) == -1) {
					printf("zeromq: %s\n", zmq_strerror(zmq_errno()));
				}
				
				if (zmq_connect(objectMonitor, "inproc://minichess-zeromq-monitor") == -1) {
					printf("zeromq: %s\n", zmq_strerror(zmq_errno()));
				}
			}
			
			{
				do {
					int intEventspecifier = 0;
					int intEventvalue = 0;
					char charEventaddress[256] = { };
					
					#if (ZMQ_VERSION_MAJOR == 3)
						{
							zmq_msg_t objectMessage = { };
							
							zmq_msg_init(&objectMessage);
							
							if (zmq_recvmsg(objectMonitor, &objectMessage, 0) == -1) {
								printf("zeromq: %s\n", zmq_strerror(zmq_errno()));
							}
							
							zmq_event_t objectEvent = { };
							
							memcpy(&objectEvent, zmq_msg_data(&objectMessage), sizeof(objectEvent));
							
							intEventspecifier = objectEvent.event;
							intEventvalue = 0
							charEventaddress[0] = '\0';
							
							zmq_msg_close(&objectMessage);
						}
						
					#elif (ZMQ_VERSION_MAJOR == 4)
						{
							zmq_msg_t objectMessage = { };
							
							zmq_msg_init(&objectMessage);
							
							if (zmq_recvmsg(objectMonitor, &objectMessage, 0) == -1) {
								printf("zeromq: %s\n", zmq_strerror(zmq_errno()));
							}
							
							uint8_t* intData = (uint8_t*) (zmq_msg_data(&objectMessage));
							
							intEventspecifier = *(uint16_t*) (intData + 0);
							intEventvalue = *(uint32_t*) (intData + 2);
							
							zmq_msg_close(&objectMessage);
						}
						
						{
							zmq_msg_t objectMessage = { };
							
							zmq_msg_init(&objectMessage);
							
							if (zmq_recvmsg(objectMonitor, &objectMessage, 0) == -1) {
								printf("zeromq: %s\n", zmq_strerror(zmq_errno()));
							}
							
							charEventaddress[0] = '\0';
							
							zmq_msg_close(&objectMessage);
						}
						
					#endif
					
					{
						if (intEventspecifier == ZMQ_EVENT_CONNECTED) {
							{
								zeromq_boolConnected = true;
								
								webserver_broadcast("zeromq_status", NULL);
							}
							
							{
								cJSON* objectOut = cJSON_CreateObject();
								cJSON* objectIn = NULL;
								
								{
									cJSON_AddStringToObject(objectOut, "strFunction", "ping");
								}
								
								{
									zeromq_send(objectOut);
									
									objectIn = zeromq_recv();
								}
								
								{
									strcpy(zeromq_charClient, cJSON_GetObjectItem(objectIn, "strOut")->valuestring);
									
									webserver_broadcast("zeromq_name", NULL);
								}
								
								cJSON_Delete(objectOut);
								cJSON_Delete(objectIn);
							}
							
							{
								printf("zeromq: connected to %s\n", zeromq_charClient);
							}
							
						} else if (intEventspecifier == ZMQ_EVENT_DISCONNECTED) {
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
						if (intEventspecifier == ZMQ_EVENT_CONNECTED) {
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
				} while (pthread_mutex_trylock(&zeromq_objectRunning) != 0);
				
				pthread_mutex_unlock(&zeromq_objectRunning);
			}
			
			zmq_close(objectMonitor);
		}
		
		zmq_close(objectSocket);
		zmq_ctx_destroy(objectContext);
	}
}

void zeromq_start() {
	{
		zeromq_objectSocket = NULL;
	}
	
	{
		zeromq_boolConnected = false;
		
		zeromq_charClient[0] = '\0';
	}
	
	{
		pthread_mutex_init(&zeromq_objectRunning, NULL);
		
		pthread_mutex_lock(&zeromq_objectRunning);
	}
	
	{
		pthread_t objectThread = 0;
		
		pthread_create(&objectThread, NULL, (void*) (zeromq_thread), NULL);
	}
}

void zeromq_stop() {
	{
		pthread_mutex_unlock(&zeromq_objectRunning);
		
		pthread_mutex_destroy(&zeromq_objectRunning);
	}
}

bool zeromq_connected() {
	return zeromq_boolConnected;
}

char* zeromq_name() {
	return zeromq_charClient;
}

void zeromq_send(cJSON* objectJson) {
	{
		assert(zeromq_connected() == true);
	}
	
	{
		char* charJson = cJSON_PrintUnformatted(objectJson);
		
		if (zmq_send(zeromq_objectSocket, charJson, strlen(charJson), 0) == -1) {
			printf("zeromq: %s\n", zmq_strerror(zmq_errno()));
		}
		
		free(charJson);
	}
}

cJSON* zeromq_recv() {
	cJSON* objectJson = NULL;
	
	{
		assert(zeromq_connected() == true);
	}
	
	{
		char charJson[1024] = { };
		
		if (zmq_recv(zeromq_objectSocket, charJson, sizeof(charJson), 0) == -1) {
			printf("zeromq: %s\n", zmq_strerror(zmq_errno()));
		}
		
		objectJson = cJSON_Parse(charJson);
	}
	
	return objectJson;
}
