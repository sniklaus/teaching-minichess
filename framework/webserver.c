#include "main.h"

// TOOD: ENFORCE MUTUAL EXCLUSION

pthread_mutex_t webserver_objectRunning = PTHREAD_MUTEX_INITIALIZER;

struct mg_mgr* webserver_objectMongoose = NULL;
struct mg_connection* webserver_objectConnection = NULL;

void webserver_handler(struct mg_connection* objectConnection, int intEvent, void* voidData) {
	if (intEvent == MG_EV_HTTP_REQUEST) {
		struct http_message* objectRequest = (struct http_message*) (voidData);
		
		{
			printf("webserver: %.*s\n", (int) (objectRequest->uri.len), objectRequest->uri.p);
		}
		
		{
			if (objectConnection->send_mbuf.len == 0) {
				if (mg_vcmp(&objectRequest->uri, "/") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 302 Found\r\n");
						
						mg_printf(objectConnection, "%s", "Location: /assets/index.html\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						mg_send_http_chunk(objectConnection, "", 0);
					}
					
				} else if (strncmp(objectRequest->uri.p, "/assets/", strlen("/assets/"))  == 0) {
					{
						struct mg_serve_http_opts objectServe = { };
						
						objectServe.document_root = ".";
						objectServe.dav_document_root = ".";
						objectServe.enable_directory_listing = "yes";
						
						mg_serve_http(objectConnection, objectRequest, objectServe);
					}
					
				}
			}
		}
		
		{
			if (objectConnection->send_mbuf.len == 0) {
				if (zeromq_connected() == false) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 400 Bad Request\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						mg_send_http_chunk(objectConnection, "", 0);
					}
				}
			}
		}
		
		{
			if (objectConnection->send_mbuf.len == 0) {
				if (mg_vcmp(&objectRequest->uri, "/chess_reset") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							chess_reset();
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/chess_boardGet") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							char charOut[1024] = { };
							
							chess_boardGet(charOut);
							
							cJSON_AddStringToObject(objectJson, "strOut", charOut);
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/chess_boardSet") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							char charIn[1024] = { };
							
							mg_get_http_var(&objectRequest->query_string, "strIn", charIn, sizeof(charIn));
							
							chess_boardSet(charIn);
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/chess_winner") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							char strReturn[16] = { };
							
							strReturn[0] = chess_winner();
							strReturn[1] = '\0';
							
							cJSON_AddStringToObject(objectJson, "strReturn", strReturn);
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/chess_eval") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							cJSON_AddNumberToObject(objectJson, "intReturn", chess_eval());
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/chess_moves") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							int intOut = 0;
							char charOut[1024] = { };
							
							intOut = chess_moves(charOut);
							
							cJSON_AddNumberToObject(objectJson, "intOut", intOut);
							cJSON_AddStringToObject(objectJson, "strOut", charOut);
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/chess_move") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							char charIn[16] = { };
							
							mg_get_http_var(&objectRequest->query_string, "strIn", charIn, sizeof(charIn));
							
							chess_move(charIn);
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/chess_moveRandom") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							char charOut[16] = { };
							
							chess_moveRandom(charOut);
							
							cJSON_AddStringToObject(objectJson, "strOut", charOut);
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/chess_moveGreedy") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							char charOut[16] = { };
							
							chess_moveGreedy(charOut);
							
							cJSON_AddStringToObject(objectJson, "strOut", charOut);
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/chess_moveNegamax") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							char charOut[16] = { };
							char charDepth[16] = { };
							char charDuration[16] = { };
							
							mg_get_http_var(&objectRequest->query_string, "intDepth", charDepth, sizeof(charDepth));
							mg_get_http_var(&objectRequest->query_string, "intDuration", charDuration, sizeof(charDuration));
							
							chess_moveNegamax(charOut, atoi(charDepth), atoi(charDuration));
							
							cJSON_AddStringToObject(objectJson, "strOut", charOut);
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/chess_moveAlphabeta") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							char charOut[16] = { };
							char charDepth[16] = { };
							char charDuration[16] = { };
							
							mg_get_http_var(&objectRequest->query_string, "intDepth", charDepth, sizeof(charDepth));
							mg_get_http_var(&objectRequest->query_string, "intDuration", charDuration, sizeof(charDuration));
							
							chess_moveAlphabeta(charOut, atoi(charDepth), atoi(charDuration));
							
							cJSON_AddStringToObject(objectJson, "strOut", charOut);
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/chess_undo") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							chess_undo();
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/test_board") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							unsigned long long longStart = milliseconds();
							
							cJSON_AddBoolToObject(objectJson, "boolReturn", test_board());
							
							unsigned long long longStop = milliseconds();
							
							cJSON_AddNumberToObject(objectJson, "intBench", longStop - longStart);
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/test_winner") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							unsigned long long longStart = milliseconds();
							
							cJSON_AddBoolToObject(objectJson, "boolReturn", test_winner());
							
							unsigned long long longStop = milliseconds();
							
							cJSON_AddNumberToObject(objectJson, "intBench", longStop - longStart);
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/test_isValid") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							unsigned long long longStart = milliseconds();
							
							cJSON_AddBoolToObject(objectJson, "boolReturn", test_isValid());
							
							unsigned long long longStop = milliseconds();
							
							cJSON_AddNumberToObject(objectJson, "intBench", longStop - longStart);
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/test_isEnemy") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							unsigned long long longStart = milliseconds();
							
							cJSON_AddBoolToObject(objectJson, "boolReturn", test_isEnemy());
							
							unsigned long long longStop = milliseconds();
							
							cJSON_AddNumberToObject(objectJson, "intBench", longStop - longStart);
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/test_isOwn") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							unsigned long long longStart = milliseconds();
							
							cJSON_AddBoolToObject(objectJson, "boolReturn", test_isOwn());
							
							unsigned long long longStop = milliseconds();
							
							cJSON_AddNumberToObject(objectJson, "intBench", longStop - longStart);
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/test_isNothing") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							unsigned long long longStart = milliseconds();
							
							cJSON_AddBoolToObject(objectJson, "boolReturn", test_isNothing());
							
							unsigned long long longStop = milliseconds();
							
							cJSON_AddNumberToObject(objectJson, "intBench", longStop - longStart);
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/test_eval") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							unsigned long long longStart = milliseconds();
							
							cJSON_AddBoolToObject(objectJson, "boolReturn", test_eval());
							
							unsigned long long longStop = milliseconds();
							
							cJSON_AddNumberToObject(objectJson, "intBench", longStop - longStart);
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/test_moves") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							unsigned long long longStart = milliseconds();
							
							cJSON_AddBoolToObject(objectJson, "boolReturn", test_moves());
							
							unsigned long long longStop = milliseconds();
							
							cJSON_AddNumberToObject(objectJson, "intBench", longStop - longStart);
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/test_move") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							unsigned long long longStart = milliseconds();
							
							cJSON_AddBoolToObject(objectJson, "boolReturn", test_move());
							
							unsigned long long longStop = milliseconds();
							
							cJSON_AddNumberToObject(objectJson, "intBench", longStop - longStart);
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/test_undo") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							unsigned long long longStart = milliseconds();
							
							cJSON_AddBoolToObject(objectJson, "boolReturn", test_undo());
							
							unsigned long long longStop = milliseconds();
							
							cJSON_AddNumberToObject(objectJson, "intBench", longStop - longStart);
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/test_movesShuffled") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							unsigned long long longStart = milliseconds();
							
							cJSON_AddBoolToObject(objectJson, "boolReturn", test_movesShuffled());
							
							unsigned long long longStop = milliseconds();
							
							cJSON_AddNumberToObject(objectJson, "intBench", longStop - longStart);
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/test_movesEvaluated") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							unsigned long long longStart = milliseconds();
							
							cJSON_AddBoolToObject(objectJson, "boolReturn", test_movesEvaluated());
							
							unsigned long long longStop = milliseconds();
							
							cJSON_AddNumberToObject(objectJson, "intBench", longStop - longStart);
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/test_moveRandom") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							unsigned long long longStart = milliseconds();
							
							cJSON_AddBoolToObject(objectJson, "boolReturn", test_moveRandom());
							
							unsigned long long longStop = milliseconds();
							
							cJSON_AddNumberToObject(objectJson, "intBench", longStop - longStart);
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/test_moveGreedy") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							unsigned long long longStart = milliseconds();
							
							cJSON_AddBoolToObject(objectJson, "boolReturn", test_moveGreedy());
							
							unsigned long long longStop = milliseconds();
							
							cJSON_AddNumberToObject(objectJson, "intBench", longStop - longStart);
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/test_moveNegamax") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							unsigned long long longStart = milliseconds();
							
							cJSON_AddBoolToObject(objectJson, "boolReturn", test_moveNegamax());
							
							unsigned long long longStop = milliseconds();
							
							cJSON_AddNumberToObject(objectJson, "intBench", longStop - longStart);
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/test_moveAlphabeta") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							unsigned long long longStart = milliseconds();
							
							cJSON_AddBoolToObject(objectJson, "boolReturn", test_moveAlphabeta());
							
							unsigned long long longStop = milliseconds();
							
							cJSON_AddNumberToObject(objectJson, "intBench", longStop - longStart);
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/imcs_register") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							char charUser[1024] = { };
							char charPass[1024] = { };
							
							mg_get_http_var(&objectRequest->query_string, "strUser", charUser, sizeof(charUser));
							mg_get_http_var(&objectRequest->query_string, "strPass", charPass, sizeof(charPass));
							
							imcs_register(charUser, charPass);
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/imcs_login") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							char charUser[1024] = { };
							char charPass[1024] = { };
							
							mg_get_http_var(&objectRequest->query_string, "strUser", charUser, sizeof(charUser));
							mg_get_http_var(&objectRequest->query_string, "strPass", charPass, sizeof(charPass));
							
							imcs_login(charUser, charPass);
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/imcs_list") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							imcs_list();
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/imcs_offer") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							imcs_offer();
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/imcs_accept") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							char charIdent[1024] = { };
							
							mg_get_http_var(&objectRequest->query_string, "intIdent", charIdent, sizeof(charIdent));
							
							imcs_accept(atoi(charIdent));
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				} else if (mg_vcmp(&objectRequest->uri, "/imcs_ratings") == 0) {
					{
						mg_printf(objectConnection, "%s", "HTTP/1.1 200 OK\r\n");
						
						mg_printf(objectConnection, "%s", "Transfer-Encoding: chunked\r\n");
						
						mg_printf(objectConnection, "%s", "Content-Type: application/json\r\n");
						
						mg_printf(objectConnection, "%s", "\r\n");
					}
					
					{
						cJSON* objectJson = cJSON_CreateObject();
						
						{
							imcs_ratings();
						}
						
						{
							char* charJson = cJSON_PrintUnformatted(objectJson);
							
							mg_send_http_chunk(objectConnection, charJson, strlen(charJson));
							mg_send_http_chunk(objectConnection, "", 0);
							
							free(charJson);
						}
						
						cJSON_Delete(objectJson);
					}
					
				}
			}
		}
		
	} else if (intEvent == MG_EV_WEBSOCKET_HANDSHAKE_DONE) {
		{
			webserver_broadcast("zeromq_status", NULL);
			
			webserver_broadcast("zeromq_name", NULL);
		}
		
		{
			webserver_broadcast("imcs_status", NULL);
		}
		
	} else if (intEvent == MG_EV_WEBSOCKET_FRAME) {
		
		
	}
}

void webserver_thread() {
	{
		mg_mgr_init(webserver_objectMongoose, NULL);
	}
	
	{
		char charWebserver[1024] = { };
		
		sprintf(charWebserver, "%d", main_intWebserver);
		
		webserver_objectConnection = mg_bind(webserver_objectMongoose, charWebserver, webserver_handler);
	}
	
	{
		mg_set_protocol_http_websocket(webserver_objectConnection);
	}
	
	{
		do {
			mg_mgr_poll(webserver_objectMongoose, 1000);
		} while (pthread_mutex_trylock(&webserver_objectRunning) != 0);
		
		pthread_mutex_unlock(&webserver_objectRunning);
	}
	
	{
		mg_mgr_free(webserver_objectMongoose);
	}
}

void webserver_start() {
	{
		pthread_mutex_init(&webserver_objectRunning, NULL);
		
		pthread_mutex_lock(&webserver_objectRunning);
	}
	
	{
		webserver_objectMongoose = (struct mg_mgr*) (malloc(sizeof(struct mg_mgr)));
		
		webserver_objectConnection = NULL;
	}
	
	{
		pthread_t objectThread = 0;
		
		pthread_create(&objectThread, NULL, (void*) (webserver_thread), NULL);
	}
}

void webserver_stop() {
	{
		pthread_mutex_unlock(&webserver_objectRunning);
		
		pthread_mutex_destroy(&webserver_objectRunning);
	}
}

void webserver_broadcast(char* charEvent, char* charData) {
	{
		cJSON* objectJson = cJSON_CreateObject();
		
		{
			cJSON_AddStringToObject(objectJson, "strEvent", charEvent);
		}
		
		{
			if (strcmp(charEvent, "zeromq_status") == 0) {
				if (zeromq_connected() == false) {
					cJSON_AddStringToObject(objectJson, "strData", "disconnected");
					
				} else if (zeromq_connected() == true) {
					cJSON_AddStringToObject(objectJson, "strData", "connected");
					
				}
				
			} else if (strcmp(charEvent, "zeromq_name") == 0) {
				cJSON_AddStringToObject(objectJson, "strData", zeromq_name());
				
			} else if (strcmp(charEvent, "imcs_status") == 0) {
				if (imcs_connected() == false) {
					cJSON_AddStringToObject(objectJson, "strData", "disconnected");
					
				} else if ((imcs_connected() == true) && (imcs_authorized() == false)) {
					cJSON_AddStringToObject(objectJson, "strData", "connected");
					
				} else if ((imcs_connected() == true) && (imcs_authorized() == true)) {
					cJSON_AddStringToObject(objectJson, "strData", "authorized");
					
				}
				
			} else if (strcmp(charEvent, "imcs_buffer") == 0) {
				cJSON_AddStringToObject(objectJson, "strData", charData);
				
			} else if (strcmp(charEvent, "imcs_board") == 0) {
				cJSON_AddStringToObject(objectJson, "strData", charData);
				
			} else if (strcmp(charEvent, "imcs_operation") == 0) {
				cJSON_AddStringToObject(objectJson, "strData", charData);
				
			} 
		}
		
		{
			char* charJson = cJSON_PrintUnformatted(objectJson);
			
			{
				struct mg_connection* objectConnection = mg_next(webserver_objectMongoose, NULL);
				
				do {
					if (objectConnection == NULL) {
						break;
					}
					
					{
						if ((objectConnection->flags & MG_F_IS_WEBSOCKET) == MG_F_IS_WEBSOCKET) {
							mg_send_websocket_frame(objectConnection, WEBSOCKET_OP_TEXT, charJson, strlen(charJson));
						}
					}
					
					{
						objectConnection = mg_next(webserver_objectMongoose, objectConnection);
					}
				} while (true);
			}
			
			free(charJson);
		}
		
		cJSON_Delete(objectJson);
	}
}
