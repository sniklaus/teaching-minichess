#include "main.h"

// TOOD: ENFORCE MUTUAL EXCLUSION
// TODO: DO NOT EXPOSE A POINTER TO THE CLIENT BUFFER

pthread_mutex_t zeromq_objRunning = PTHREAD_MUTEX_INITIALIZER;

void* zeromq_objSocket = NULL;

bool zeromq_boolConnected = false;
char zeromq_charClient[256] = { };

void zeromq_thread() {
	void* objContext = zmq_ctx_new();
	void* objSocket = zmq_socket(objContext, ZMQ_PAIR);
	
	{
		char charZeromq[1024] = { };
		
		sprintf(charZeromq, "tcp://localhost:%d", main_intZeromq);
		
		if (zmq_connect(objSocket, charZeromq) == -1) {
			printf("zeromq: %s\n", zmq_strerror(zmq_errno()));
		}
	}
	
	zeromq_objSocket = objSocket;
	
	{
		void* objMonitor = zmq_socket(objContext, ZMQ_PAIR);
		
		if (zmq_socket_monitor(objSocket, "inproc://minichess-zeromq-monitor", ZMQ_EVENT_ALL) == -1) {
			printf("zeromq: %s\n", zmq_strerror(zmq_errno()));
		}
		
		if (zmq_connect(objMonitor, "inproc://minichess-zeromq-monitor") == -1) {
			printf("zeromq: %s\n", zmq_strerror(zmq_errno()));
		}
		
		do {
			int intEventspecifier = 0;
			int intEventvalue = 0;
			char charEventaddress[256] = { };
			
			#if (ZMQ_VERSION_MAJOR == 3)
				{
					zmq_msg_t objMessage = { };
					
					zmq_msg_init(&objMessage);
					
					if (zmq_recvmsg(objMonitor, &objMessage, 0) == -1) {
						printf("zeromq: %s\n", zmq_strerror(zmq_errno()));
					}
					
					zmq_event_t objEvent = { };
					
					memcpy(&objEvent, zmq_msg_data(&objMessage), sizeof(objEvent));
					
					intEventspecifier = objEvent.event;
					intEventvalue = 0
					charEventaddress[0] = '\0';
					
					zmq_msg_close(&objMessage);
				}
				
			#elif (ZMQ_VERSION_MAJOR == 4)
				{
					zmq_msg_t objMessage = { };
					
					zmq_msg_init(&objMessage);
					
					if (zmq_recvmsg(objMonitor, &objMessage, 0) == -1) {
						printf("zeromq: %s\n", zmq_strerror(zmq_errno()));
					}
					
					uint8_t* intData = (uint8_t*) (zmq_msg_data(&objMessage));
					
					intEventspecifier = *(uint16_t*) (intData + 0);
					intEventvalue = *(uint32_t*) (intData + 2);
					
					zmq_msg_close(&objMessage);
				}
				
				{
					zmq_msg_t objMessage = { };
					
					zmq_msg_init(&objMessage);
					
					if (zmq_recvmsg(objMonitor, &objMessage, 0) == -1) {
						printf("zeromq: %s\n", zmq_strerror(zmq_errno()));
					}
					
					charEventaddress[0] = '\0';
					
					zmq_msg_close(&objMessage);
				}
				
			#endif
			
			if (intEventspecifier == ZMQ_EVENT_CONNECTED) {
				zeromq_boolConnected = true;
				
				webserver_broadcast("zeromq_status", NULL);
				
				{
					cJSON* objOut = cJSON_CreateObject();
					cJSON* objIn = NULL;
					
					{
						cJSON_AddStringToObject(objOut, "strFunction", "ping");
					}
					
					{
						zeromq_send(objOut);
						
						objIn = zeromq_recv();
					}
					
					{
						strcpy(zeromq_charClient, cJSON_GetObjectItem(objIn, "strOut")->valuestring);
						
						webserver_broadcast("zeromq_name", NULL);
					}
					
					cJSON_Delete(objOut);
					cJSON_Delete(objIn);
				}
				
				printf("zeromq: connected to %s\n", zeromq_charClient);
				
			} else if (intEventspecifier == ZMQ_EVENT_DISCONNECTED) {
				zeromq_boolConnected = false;
				
				webserver_broadcast("zeromq_status", NULL);

				{
					// ...
				}
				
				printf("zeromq: disconnected from %s\n", zeromq_charClient);
				
			}
			
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
		} while (pthread_mutex_trylock(&zeromq_objRunning) != 0);
		
		pthread_mutex_unlock(&zeromq_objRunning);
		
		zmq_close(objMonitor);
	}
	
	zmq_close(objSocket);
	zmq_ctx_destroy(objContext);
}

void zeromq_start() {
	zeromq_objSocket = NULL;

	zeromq_boolConnected = false;
	zeromq_charClient[0] = '\0';
	
	pthread_mutex_init(&zeromq_objRunning, NULL);
	pthread_mutex_lock(&zeromq_objRunning);
	
	pthread_t objThread = 0; pthread_create(&objThread, NULL, (void*) (zeromq_thread), NULL);
}

void zeromq_stop() {
	pthread_mutex_unlock(&zeromq_objRunning);
	pthread_mutex_destroy(&zeromq_objRunning);
}

bool zeromq_connected() {
	return zeromq_boolConnected;
}

char* zeromq_name() {
	return zeromq_charClient;
}

void zeromq_send(cJSON* objJson) {
	assert(zeromq_connected() == true);
	
	{
		char* charJson = cJSON_PrintUnformatted(objJson);
		
		if (zmq_send(zeromq_objSocket, charJson, strlen(charJson), 0) == -1) {
			printf("zeromq: %s\n", zmq_strerror(zmq_errno()));
		}
		
		free(charJson);
	}
}

cJSON* zeromq_recv() {
	cJSON* objJson = NULL;
	
	assert(zeromq_connected() == true);
	
	{
		char charJson[1024] = { };
		
		if (zmq_recv(zeromq_objSocket, charJson, sizeof(charJson), 0) == -1) {
			printf("zeromq: %s\n", zmq_strerror(zmq_errno()));
		}
		
		objJson = cJSON_Parse(charJson);
	}
	
	return objJson;
}
