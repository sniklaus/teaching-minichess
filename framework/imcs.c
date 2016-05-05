#include "main.h"

// TOOD: ENFORCE MUTUAL EXCLUSION
// TODO: IN THE TOURNAMENT, THE RESET FUNCTION MIGHT BE CALLED MULTIPLE TIMES

pthread_mutex_t imcs_pthreadmutexRunning = PTHREAD_MUTEX_INITIALIZER;

struct mg_mgr* imcs_mgmgrHandle = NULL;
struct mg_connection* imcs_mgconnectionHandle = NULL;
char* imcs_charServer = "tcp://svcs.cs.pdx.edu:3589";

bool imcs_boolConnected = false;
bool imcs_boolAuthorized = false;

char imcs_charBuffer[1024] = { };
char imcs_charOperation[16] = { };
char imcs_charTermination[16] = { };

void imcs_handler(struct mg_connection* mgconnectionHandle, int intEvent, void* voidData) {
	if (intEvent == MG_EV_CONNECT) {
		{
			printf("imcs: connected\n");
		}
		
		{
			imcs_boolConnected = true;
			
			imcs_boolAuthorized = false;
			
			webserver_broadcast("imcs_status", NULL);
		}
		
	} else if (intEvent == MG_EV_CLOSE) {
		{
			printf("imcs: disconnected\n");
		}
		
		{
			imcs_boolConnected = false;
			
			imcs_boolAuthorized = false;
			
			webserver_broadcast("imcs_status", NULL);
		}
		
		{
			imcs_mgconnectionHandle = mg_connect(imcs_mgmgrHandle, imcs_charServer, imcs_handler);
		}
		
	} else if (intEvent == MG_EV_RECV) {
		{
			mgconnectionHandle->recv_mbuf.buf[mgconnectionHandle->recv_mbuf.len] = '\0';
		}
		
		{
			if (strstr(mgconnectionHandle->recv_mbuf.buf, "201 hello") != NULL) {
				imcs_boolAuthorized = true;
				
				webserver_broadcast("imcs_status", NULL);
				
			} else if (strstr(mgconnectionHandle->recv_mbuf.buf, "202 hello new user") != NULL) {
				imcs_boolAuthorized = true;
				
				webserver_broadcast("imcs_status", NULL);
				
			}
		}
		
		{
			webserver_broadcast("imcs_buffer", mgconnectionHandle->recv_mbuf.buf);
		}
		
		{
			strncat(imcs_charBuffer, mgconnectionHandle->recv_mbuf.buf, mgconnectionHandle->recv_mbuf.len);
		}
		
		{
			int intSplit = 0;
			char charSplit[256][1024] = { };
			
			intSplit += 1;
			strcpy(charSplit[0], imcs_charBuffer);
			
			for (int intFor1 = 1; strstr(charSplit[intFor1 - 1], "\r\n") != NULL; intFor1 += 1) {
				intSplit += 1;
				strcpy(charSplit[intFor1], strstr(charSplit[intFor1 - 1], "\r\n") + strlen("\r\n"));
				
				strstr(charSplit[intFor1 - 1], "\r\n")[0] = '\0';
			}
			
			for (int intFor1 = 0; intFor1 < intSplit; intFor1 += 1) {
				if (strncmp(charSplit[intFor1], "105", strlen("105")) == 0) {
					chess_reset();
					
				} else if (strncmp(charSplit[intFor1], "106", strlen("106")) == 0) {
					chess_reset();
					
				} else if (strncmp(charSplit[intFor1], "230", strlen("230")) == 0) {
					webserver_broadcast("imcs_operation", "competition");
					
					imcs_charBuffer[0] = '\0';
					
				} else if (strncmp(charSplit[intFor1], "231", strlen("231")) == 0) {
					webserver_broadcast("imcs_operation", "competition");
					
					imcs_charBuffer[0] = '\0';
					
				} else if (strncmp(charSplit[intFor1], "232", strlen("232")) == 0) {
					webserver_broadcast("imcs_operation", "competition");
					
					imcs_charBuffer[0] = '\0';
					
				} else if (strncmp(charSplit[intFor1], "408", strlen("408")) == 0) {
					webserver_broadcast("imcs_operation", "competition");
					
					imcs_charBuffer[0] = '\0';
					
				} else if (strncmp(charSplit[intFor1], "?", strlen("?")) == 0) {
					char charMove[1024] = { };
					
					{
						char charBuffer[1024] = { };
						
						strcpy(charBuffer, charSplit[intFor1 - 1]);
						
						chess_boardSet(charBuffer);
						
						webserver_broadcast("imcs_board", charBuffer);
					}
					
					{
						int intTime = 0;
						
						intTime += (charSplit[intFor1][2] - '0') * 600000;
						intTime += (charSplit[intFor1][3] - '0') * 60000;
						intTime += (charSplit[intFor1][5] - '0') * 10000;
						intTime += (charSplit[intFor1][6] - '0') * 1000;
						intTime += (charSplit[intFor1][8] - '0') * 100;
						intTime += (charSplit[intFor1][9] - '0') * 10;
						intTime += (charSplit[intFor1][10] - '0') * 1;
						
						chess_moveAlphabeta(charMove, -1, intTime);
					}
					
					{
						char charBuffer[1024] = { };
						
						sprintf(charBuffer, ">>> move %.5s\n", charMove);
						
						webserver_broadcast("imcs_buffer", charBuffer);
					}
					
					{
						mg_printf(imcs_mgconnectionHandle, "%.5s\r\n", charMove);
					}
					
					{
						char charBuffer[1024] = { };
						
						chess_boardGet(charBuffer);
						
						webserver_broadcast("imcs_board", charBuffer);
					}
					
					{
						imcs_charBuffer[0] = '\0';
					}
					
				}
			}
		}
		
		{
			if (imcs_charTermination[0] != '\0') {
				if (strstr(imcs_charBuffer, imcs_charTermination) != NULL) {
					webserver_broadcast("imcs_operation", imcs_charOperation);
					
					imcs_charBuffer[0] = '\0';
					imcs_charOperation[0] = '\0';
					imcs_charTermination[0] = '\0';
				}
			}
		}
		
		{
			mbuf_remove(&mgconnectionHandle->recv_mbuf, mgconnectionHandle->recv_mbuf.len);
		}
		
	}
}

void imcs_thread() {
	{
		mg_mgr_init(imcs_mgmgrHandle, NULL);
	}
	
	{
		imcs_mgconnectionHandle = mg_connect(imcs_mgmgrHandle, imcs_charServer, imcs_handler);
	}
	
	{
		do {
			mg_mgr_poll(imcs_mgmgrHandle, 1000);
		} while (pthread_mutex_trylock(&imcs_pthreadmutexRunning) != 0);
		
		pthread_mutex_unlock(&imcs_pthreadmutexRunning);
	}
	
	{
		mg_mgr_free(imcs_mgmgrHandle);
	}
}

void imcs_start() {
	{
		pthread_mutex_init(&imcs_pthreadmutexRunning, NULL);
		
		pthread_mutex_lock(&imcs_pthreadmutexRunning);
	}
	
	{
		imcs_mgmgrHandle = (struct mg_mgr*) (malloc(sizeof(struct mg_mgr)));
		
		imcs_mgconnectionHandle = NULL;
	}
	
	{
		imcs_boolConnected = false;
		
		imcs_boolAuthorized = false;
	}
	
	{
		imcs_charBuffer[0] = '\0';
		
		imcs_charOperation[0] = '\0';
		
		imcs_charTermination[0] = '\0';
	}
	
	{
		pthread_t pthreadHandle = 0;
		
		pthread_create(&pthreadHandle, NULL, (void*) (imcs_thread), NULL);
	}
}

void imcs_stop() {
	{
		pthread_mutex_unlock(&imcs_pthreadmutexRunning);
		
		pthread_mutex_destroy(&imcs_pthreadmutexRunning);
	}
}

bool imcs_connected() {
	return imcs_boolConnected;
}

bool imcs_authorized() {
	return imcs_boolAuthorized;
}

void imcs_register(char* charUser, char* charPass) {
	{
		assert(imcs_connected() == true);
	}
	
	{
		char charBuffer[1024] = { };
		
		sprintf(charBuffer, ">>> register %s\n", charUser);
		
		webserver_broadcast("imcs_buffer", charBuffer);
	}
	
	{
		imcs_charBuffer[0] = '\0';
		sprintf(imcs_charOperation, "imcs_register");
		sprintf(imcs_charTermination, "\r\n");
		
		mg_printf(imcs_mgconnectionHandle, "register %s %s\n", charUser, charPass);
	}
}

void imcs_login(char* charUser, char* charPass) {
	{
		assert(imcs_connected() == true);
	}
	
	{
		char charBuffer[1024] = { };
		
		sprintf(charBuffer, ">>> me %s\n", charUser);
		
		webserver_broadcast("imcs_buffer", charBuffer);
	}
	
	{
		imcs_charBuffer[0] = '\0';
		sprintf(imcs_charOperation, "imcs_login");
		sprintf(imcs_charTermination, "\r\n");
		
		mg_printf(imcs_mgconnectionHandle, "me %s %s\n", charUser, charPass);
	}
}

void imcs_list() {
	{
		assert(imcs_connected() == true);
	}
	
	{
		webserver_broadcast("imcs_buffer", ">>> list\n");
	}
	
	{
		imcs_charBuffer[0] = '\0';
		sprintf(imcs_charOperation, "imcs_list");
		sprintf(imcs_charTermination, ".\r\n");
		
		mg_printf(imcs_mgconnectionHandle, "list\n");
	}
}

void imcs_offer() {
	{
		assert(imcs_connected() == true);
	}
	
	{
		webserver_broadcast("imcs_buffer", ">>> offer\n");
	}
	
	{
		imcs_charBuffer[0] = '\0';
		sprintf(imcs_charOperation, "imcs_offer");
		imcs_charTermination[0] = '\0';
		
		mg_printf(imcs_mgconnectionHandle, "offer W\n");
	}
}

void imcs_accept(int intIdent) {
	{
		assert(imcs_connected() == true);
	}
	
	{
		char charBuffer[1024] = { };
		
		sprintf(charBuffer, ">>> accept %d\n", intIdent);
		
		webserver_broadcast("imcs_buffer", charBuffer);
	}
	
	{
		imcs_charBuffer[0] = '\0';
		sprintf(imcs_charOperation, "imcs_accept");
		imcs_charTermination[0] = '\0';
		
		mg_printf(imcs_mgconnectionHandle, "accept %d B\n", intIdent);
	}
}

void imcs_ratings() {
	{
		assert(imcs_connected() == true);
	}
	
	{
		webserver_broadcast("imcs_buffer", ">>> ratings\n");
	}
	
	{
		imcs_charBuffer[0] = '\0';
		sprintf(imcs_charOperation, "imcs_ratings");
		sprintf(imcs_charTermination, ".\r\n");
		
		mg_printf(imcs_mgconnectionHandle, "ratings\n");
	}
}
