#include "main.h"

bool zeromq_boolRunning = false;

void zeromq_start() {
	{
		zeromq_boolRunning = true;
	}
	
	{
		void* objectContext = zmq_ctx_new();
		void* objectSocket = zmq_socket(objectContext, ZMQ_PAIR);
		
		{
			char charZeromq[1024] = { };
			
			sprintf(charZeromq, "tcp://*:%d", main_intZeromq);
			
			if (zmq_bind(objectSocket, charZeromq) == -1) {
				printf("zeromq: %s\n", zmq_strerror(zmq_errno()));
			}
		}
		
		{
			do {
				cJSON* objectIn = NULL;
				cJSON* objectOut = cJSON_CreateObject();
				
				{
					char charJson[1024] = { };
					
					if (zmq_recv(objectSocket, charJson, sizeof(charJson), 0) == -1) {
						printf("zeromq: %s\n", zmq_strerror(zmq_errno()));
					}
					
					objectIn = cJSON_Parse(charJson);
				}
				
				{
					if (strcmp(cJSON_GetObjectItem(objectIn, "strFunction")->valuestring, "ping") == 0) {
						cJSON_AddStringToObject(objectOut, "strOut", main_charName);
						
					} else if (strcmp(cJSON_GetObjectItem(objectIn, "strFunction")->valuestring, "chess_reset") == 0) {
						chess_reset();
						
					} else if (strcmp(cJSON_GetObjectItem(objectIn, "strFunction")->valuestring, "chess_boardGet") == 0) {
						char charOut[1024] = { };
						
						chess_boardGet(charOut);
						
						cJSON_AddStringToObject(objectOut, "strOut", charOut);
						
					} else if (strcmp(cJSON_GetObjectItem(objectIn, "strFunction")->valuestring, "chess_boardSet") == 0) {
						char charIn[1024] = { };
						
						strcpy(charIn, cJSON_GetObjectItem(objectIn, "strIn")->valuestring);
						
						chess_boardSet(charIn);
						
					} else if (strcmp(cJSON_GetObjectItem(objectIn, "strFunction")->valuestring, "chess_winner") == 0) {
						char charReturn[16] = { };
						
						charReturn[0] = chess_winner();
						charReturn[1] = '\0';
						
						cJSON_AddStringToObject(objectOut, "strReturn", charReturn);
						
					} else if (strcmp(cJSON_GetObjectItem(objectIn, "strFunction")->valuestring, "chess_isValid") == 0) {
						cJSON_AddBoolToObject(objectOut, "boolReturn", chess_isValid(cJSON_GetObjectItem(objectIn, "intX")->valueint, cJSON_GetObjectItem(objectIn, "intY")->valueint));
						
					} else if (strcmp(cJSON_GetObjectItem(objectIn, "strFunction")->valuestring, "chess_isEnemy") == 0) {
						char charIn[16] = { };
						
						strcpy(charIn, cJSON_GetObjectItem(objectIn, "strPiece")->valuestring);
						
						cJSON_AddBoolToObject(objectOut, "boolReturn", chess_isEnemy(charIn[0]));
						
					} else if (strcmp(cJSON_GetObjectItem(objectIn, "strFunction")->valuestring, "chess_isOwn") == 0) {
						char charIn[16] = { };
						
						strcpy(charIn, cJSON_GetObjectItem(objectIn, "strPiece")->valuestring);
						
						cJSON_AddBoolToObject(objectOut, "boolReturn", chess_isOwn(charIn[0]));
						
					} else if (strcmp(cJSON_GetObjectItem(objectIn, "strFunction")->valuestring, "chess_isNothing") == 0) {
						char charIn[16] = { };
						
						strcpy(charIn, cJSON_GetObjectItem(objectIn, "strPiece")->valuestring);
						
						cJSON_AddBoolToObject(objectOut, "boolReturn", chess_isNothing(charIn[0]));
						
					} else if (strcmp(cJSON_GetObjectItem(objectIn, "strFunction")->valuestring, "chess_eval") == 0) {
						cJSON_AddNumberToObject(objectOut, "intReturn", chess_eval());
						
					} else if (strcmp(cJSON_GetObjectItem(objectIn, "strFunction")->valuestring, "chess_moves") == 0) {
						int intOut = 0;
						char charOut[1024] = { };
						
						intOut = chess_moves(charOut);
						
						cJSON_AddNumberToObject(objectOut, "intOut", intOut);
						cJSON_AddStringToObject(objectOut, "strOut", charOut);
						
					} else if (strcmp(cJSON_GetObjectItem(objectIn, "strFunction")->valuestring, "chess_movesShuffled") == 0) {
						int intOut = 0;
						char charOut[1024] = { };
						
						intOut = chess_movesShuffled(charOut);
						
						cJSON_AddNumberToObject(objectOut, "intOut", intOut);
						cJSON_AddStringToObject(objectOut, "strOut", charOut);
						
					} else if (strcmp(cJSON_GetObjectItem(objectIn, "strFunction")->valuestring, "chess_movesEvaluated") == 0) {
						int intOut = 0;
						char charOut[1024] = { };
						
						intOut = chess_movesEvaluated(charOut);
						
						cJSON_AddNumberToObject(objectOut, "intOut", intOut);
						cJSON_AddStringToObject(objectOut, "strOut", charOut);
						
					} else if (strcmp(cJSON_GetObjectItem(objectIn, "strFunction")->valuestring, "chess_move") == 0) {
						char charIn[16] = { };
						
						strcpy(charIn, cJSON_GetObjectItem(objectIn, "strIn")->valuestring);
						
						chess_move(charIn);
						
					} else if (strcmp(cJSON_GetObjectItem(objectIn, "strFunction")->valuestring, "chess_moveRandom") == 0) {
						char charOut[16] = { };
						
						chess_moveRandom(charOut);
						
						cJSON_AddStringToObject(objectOut, "strOut", charOut);
						
					} else if (strcmp(cJSON_GetObjectItem(objectIn, "strFunction")->valuestring, "chess_moveGreedy") == 0) {
						char charOut[16] = { };
						
						chess_moveGreedy(charOut);
						
						cJSON_AddStringToObject(objectOut, "strOut", charOut);
						
					} else if (strcmp(cJSON_GetObjectItem(objectIn, "strFunction")->valuestring, "chess_moveNegamax") == 0) {
						char charOut[16] = { };
						
						chess_moveNegamax(charOut, cJSON_GetObjectItem(objectIn, "intDepth")->valueint, cJSON_GetObjectItem(objectIn, "intDuration")->valueint);
						
						cJSON_AddStringToObject(objectOut, "strOut", charOut);
						
					} else if (strcmp(cJSON_GetObjectItem(objectIn, "strFunction")->valuestring, "chess_moveAlphabeta") == 0) {
						char charOut[16] = { };
						
						chess_moveAlphabeta(charOut, cJSON_GetObjectItem(objectIn, "intDepth")->valueint, cJSON_GetObjectItem(objectIn, "intDuration")->valueint);
						
						cJSON_AddStringToObject(objectOut, "strOut", charOut);
						
					} else if (strcmp(cJSON_GetObjectItem(objectIn, "strFunction")->valuestring, "chess_undo") == 0) {
						chess_undo();
						
					}
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(objectOut);
					
					if (zmq_send(objectSocket, charJson, strlen(charJson), 0) == -1) {
						printf("zeromq: %s\n", zmq_strerror(zmq_errno()));
					}
					
					free(charJson);
				}
				
				cJSON_Delete(objectIn);
				cJSON_Delete(objectOut);
			} while (zeromq_boolRunning == true);
		}
		
		zmq_close(objectSocket);
		zmq_ctx_destroy(objectContext);
	}
}

void zeromq_stop() {
	{
		zeromq_boolRunning = false;
	}
}
