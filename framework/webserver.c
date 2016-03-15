#include "main.h"

void webserver_handler(struct mg_connection* mgconnectionHandle, int intEvent, void* voidData) {
	if (intEvent == MG_EV_HTTP_REQUEST) {
		struct http_message* httpmessageHandle = (struct http_message*) (voidData);
		
		if (mg_vcmp(&httpmessageHandle->uri, "/zeromq_connected") != 0) {
			printf("webserver: %.*s\n", (int) (httpmessageHandle->uri.len), httpmessageHandle->uri.p);
		}
		
		if (mg_vcmp(&httpmessageHandle->uri, "/") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 302 Found\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Location: /assets/index.html\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				mg_send_http_chunk(mgconnectionHandle, "", 0);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/zeromq_connected") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					cJSON_AddBoolToObject(cjsonHandle, "boolReturn", zeromq_connected());
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/chess_reset") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					chess_reset();
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/chess_boardGet") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					char charOut[1024] = { };
					
					chess_boardGet(charOut);
					
					cJSON_AddStringToObject(cjsonHandle, "strOut", charOut);
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/chess_boardSet") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					char charIn[1024] = { };
					
					mg_get_http_var(&httpmessageHandle->query_string, "strIn", charIn, sizeof(charIn));
					
					chess_boardSet(charIn);
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/chess_winner") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					char strReturn[16] = { };
					
					strReturn[0] = chess_winner();
					strReturn[1] = '\0';
					
					cJSON_AddStringToObject(cjsonHandle, "strReturn", strReturn);
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/chess_moves") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					int intOut = 0;
					char charOut[1024] = { };
					
					intOut = chess_moves(charOut);
					
					cJSON_AddNumberToObject(cjsonHandle, "intOut", intOut);
					cJSON_AddStringToObject(cjsonHandle, "strOut", charOut);
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/chess_move") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					char charIn[16] = { };
					
					mg_get_http_var(&httpmessageHandle->query_string, "strIn", charIn, sizeof(charIn));
					
					chess_move(charIn);
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/chess_moveRandom") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					char charOut[16] = { };
					
					chess_moveRandom(charOut);
					
					cJSON_AddStringToObject(cjsonHandle, "strOut", charOut);
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/chess_moveGreedy") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					char charOut[16] = { };
					
					chess_moveGreedy(charOut);
					
					cJSON_AddStringToObject(cjsonHandle, "strOut", charOut);
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/chess_moveNegamax") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					char charOut[16] = { };
					char charDepth[16] = { };
					char charDuration[16] = { };
					
					mg_get_http_var(&httpmessageHandle->query_string, "intDepth", charDepth, sizeof(charDepth));
					mg_get_http_var(&httpmessageHandle->query_string, "intDuration", charDuration, sizeof(charDuration));
					
					chess_moveNegamax(charOut, atoi(charDepth), atoi(charDuration));
					
					cJSON_AddStringToObject(cjsonHandle, "strOut", charOut);
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/chess_moveAlphabeta") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					char charOut[16] = { };
					char charDepth[16] = { };
					char charDuration[16] = { };
					
					mg_get_http_var(&httpmessageHandle->query_string, "intDepth", charDepth, sizeof(charDepth));
					mg_get_http_var(&httpmessageHandle->query_string, "intDuration", charDuration, sizeof(charDuration));
					
					chess_moveAlphabeta(charOut, atoi(charDepth), atoi(charDuration));
					
					cJSON_AddStringToObject(cjsonHandle, "strOut", charOut);
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/chess_undo") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					chess_undo();
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/test_board") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					unsigned long long longStart = rdtscp();
					
					cJSON_AddBoolToObject(cjsonHandle, "boolReturn", test_board());
					
					unsigned long long longStop = rdtscp();
					
					cJSON_AddNumberToObject(cjsonHandle, "dblRdtscp", (longStop - longStart) / 1000000.0);
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/test_winner") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					unsigned long long longStart = rdtscp();
					
					cJSON_AddBoolToObject(cjsonHandle, "boolReturn", test_winner());
					
					unsigned long long longStop = rdtscp();
					
					cJSON_AddNumberToObject(cjsonHandle, "dblRdtscp", (longStop - longStart) / 1000000.0);
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/test_isValid") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					unsigned long long longStart = rdtscp();
					
					cJSON_AddBoolToObject(cjsonHandle, "boolReturn", test_isValid());
					
					unsigned long long longStop = rdtscp();
					
					cJSON_AddNumberToObject(cjsonHandle, "dblRdtscp", (longStop - longStart) / 1000000.0);
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/test_isEnemy") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					unsigned long long longStart = rdtscp();
					
					cJSON_AddBoolToObject(cjsonHandle, "boolReturn", test_isEnemy());
					
					unsigned long long longStop = rdtscp();
					
					cJSON_AddNumberToObject(cjsonHandle, "dblRdtscp", (longStop - longStart) / 1000000.0);
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/test_isOwn") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					unsigned long long longStart = rdtscp();
					
					cJSON_AddBoolToObject(cjsonHandle, "boolReturn", test_isOwn());
					
					unsigned long long longStop = rdtscp();
					
					cJSON_AddNumberToObject(cjsonHandle, "dblRdtscp", (longStop - longStart) / 1000000.0);
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/test_isNothing") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					unsigned long long longStart = rdtscp();
					
					cJSON_AddBoolToObject(cjsonHandle, "boolReturn", test_isNothing());
					
					unsigned long long longStop = rdtscp();
					
					cJSON_AddNumberToObject(cjsonHandle, "dblRdtscp", (longStop - longStart) / 1000000.0);
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/test_eval") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					unsigned long long longStart = rdtscp();
					
					cJSON_AddBoolToObject(cjsonHandle, "boolReturn", test_eval());
					
					unsigned long long longStop = rdtscp();
					
					cJSON_AddNumberToObject(cjsonHandle, "dblRdtscp", (longStop - longStart) / 1000000.0);
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/test_moves") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					unsigned long long longStart = rdtscp();
					
					cJSON_AddBoolToObject(cjsonHandle, "boolReturn", test_moves());
					
					unsigned long long longStop = rdtscp();
					
					cJSON_AddNumberToObject(cjsonHandle, "dblRdtscp", (longStop - longStart) / 1000000.0);
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/test_move") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					unsigned long long longStart = rdtscp();
					
					cJSON_AddBoolToObject(cjsonHandle, "boolReturn", test_move());
					
					unsigned long long longStop = rdtscp();
					
					cJSON_AddNumberToObject(cjsonHandle, "dblRdtscp", (longStop - longStart) / 1000000.0);
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/test_undo") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					unsigned long long longStart = rdtscp();
					
					cJSON_AddBoolToObject(cjsonHandle, "boolReturn", test_undo());
					
					unsigned long long longStop = rdtscp();
					
					cJSON_AddNumberToObject(cjsonHandle, "dblRdtscp", (longStop - longStart) / 1000000.0);
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/test_movesShuffled") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					unsigned long long longStart = rdtscp();
					
					cJSON_AddBoolToObject(cjsonHandle, "boolReturn", test_movesShuffled());
					
					unsigned long long longStop = rdtscp();
					
					cJSON_AddNumberToObject(cjsonHandle, "dblRdtscp", (longStop - longStart) / 1000000.0);
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/test_movesEvaluated") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					unsigned long long longStart = rdtscp();
					
					cJSON_AddBoolToObject(cjsonHandle, "boolReturn", test_movesEvaluated());
					
					unsigned long long longStop = rdtscp();
					
					cJSON_AddNumberToObject(cjsonHandle, "dblRdtscp", (longStop - longStart) / 1000000.0);
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/test_moveRandom") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					unsigned long long longStart = rdtscp();
					
					cJSON_AddBoolToObject(cjsonHandle, "boolReturn", test_moveRandom());
					
					unsigned long long longStop = rdtscp();
					
					cJSON_AddNumberToObject(cjsonHandle, "dblRdtscp", (longStop - longStart) / 1000000.0);
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/test_moveGreedy") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					unsigned long long longStart = rdtscp();
					
					cJSON_AddBoolToObject(cjsonHandle, "boolReturn", test_moveGreedy());
					
					unsigned long long longStop = rdtscp();
					
					cJSON_AddNumberToObject(cjsonHandle, "dblRdtscp", (longStop - longStart) / 1000000.0);
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/test_moveNegamax") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					unsigned long long longStart = rdtscp();
					
					cJSON_AddBoolToObject(cjsonHandle, "boolReturn", test_moveNegamax());
					
					unsigned long long longStop = rdtscp();
					
					cJSON_AddNumberToObject(cjsonHandle, "dblRdtscp", (longStop - longStart) / 1000000.0);
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		} else if (mg_vcmp(&httpmessageHandle->uri, "/test_moveAlphabeta") == 0) {
			{
				mg_printf(mgconnectionHandle, "%s", "HTTP/1.1 200 OK\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Transfer-Encoding: chunked\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "Content-Type: application/json\r\n");
				
				mg_printf(mgconnectionHandle, "%s", "\r\n");
			}
			
			{
				cJSON* cjsonHandle = cJSON_CreateObject();
				
				{
					unsigned long long longStart = rdtscp();
					
					cJSON_AddBoolToObject(cjsonHandle, "boolReturn", test_moveAlphabeta());
					
					unsigned long long longStop = rdtscp();
					
					cJSON_AddNumberToObject(cjsonHandle, "dblRdtscp", (longStop - longStart) / 1000000.0);
				}
				
				{
					char* charJson = cJSON_PrintUnformatted(cjsonHandle);
					
					mg_send_http_chunk(mgconnectionHandle, charJson, strlen(charJson));
					mg_send_http_chunk(mgconnectionHandle, "", 0);
					
					free(charJson);
				}
				
				cJSON_Delete(cjsonHandle);
			}
			
		}
		
		if (mgconnectionHandle->send_mbuf.len == 0) {
			struct mg_serve_http_opts mgservehttpoptsHandle = { };
			
			mgservehttpoptsHandle.document_root = ".";
			mgservehttpoptsHandle.dav_document_root = ".";
			mgservehttpoptsHandle.enable_directory_listing = "yes";
			
			mg_serve_http(mgconnectionHandle, httpmessageHandle, mgservehttpoptsHandle);
		}
	}
}

pthread_mutex_t webserver_pthreadmutexRunning = PTHREAD_MUTEX_INITIALIZER;

void webserver_thread() {
	{
		struct mg_mgr mgmgrHandle = { };
		
		mg_mgr_init(&mgmgrHandle, NULL);
		
		{
			mg_set_protocol_http_websocket(mg_bind(&mgmgrHandle, "8080", webserver_handler));
		}
		
		{
			do {
				mg_mgr_poll(&mgmgrHandle, 1000);
			} while (pthread_mutex_trylock(&webserver_pthreadmutexRunning) != 0);
			
			pthread_mutex_unlock(&webserver_pthreadmutexRunning);
		}
		
		mg_mgr_free(&mgmgrHandle);
	}
}

void webserver_start() {
	{
		pthread_mutex_init(&webserver_pthreadmutexRunning, NULL);
		
		pthread_mutex_lock(&webserver_pthreadmutexRunning);
	}
	
	{
		pthread_t pthreadHandle = 0;
		
		pthread_create(&pthreadHandle, NULL, (void*) (webserver_thread), NULL);
	}
}

void webserver_stop() {
	{
		pthread_mutex_unlock(&webserver_pthreadmutexRunning);
		
		pthread_mutex_destroy(&webserver_pthreadmutexRunning);
	}
}
