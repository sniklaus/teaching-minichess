#include "main.h"

// TOOD: ENFORCE MUTUAL EXCLUSION

pthread_mutex_t imcs_pthreadmutexRunning = PTHREAD_MUTEX_INITIALIZER;

struct mg_mgr* imcs_mgmgrHandle = NULL;
struct mg_connection* imcs_mgconnectionHandle = NULL;

bool imcs_boolConnected = false;
bool imcs_boolAuthorized = false;

char imcs_charOperation[16] = { };
char imcs_charBuffer[1024] = { };
char imcs_charTermination[16] = { };

void imcs_handler(struct mg_connection* mgconnectionHandle, int intEvent, void* voidData) {
	if (intEvent == MG_EV_CONNECT) {
		{
			imcs_boolConnected = true;
			
			webserver_broadcast("imcs_status", NULL);
		}
		
	} else if (intEvent == MG_EV_CLOSE) {
		{
			imcs_boolConnected = false;
			
			webserver_broadcast("imcs_status", NULL);
		}
		
	} else if (intEvent == MG_EV_RECV) {
		{
			mgconnectionHandle->recv_mbuf.buf[mgconnectionHandle->recv_mbuf.len] = '\0';
		}
		
		{
			if (strncmp(mgconnectionHandle->recv_mbuf.buf, "201 hello", strlen("201 hello"))  == 0) {
				imcs_boolAuthorized = true;
				
				webserver_broadcast("imcs_status", NULL);
				
			} else if (strncmp(mgconnectionHandle->recv_mbuf.buf, "202 hello new user", strlen("202 hello new user"))  == 0) {
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
			if (imcs_charTermination[0] != '\0') {
				if (strrchr(imcs_charBuffer, imcs_charTermination[0]) != NULL) {
					if (strcmp(strrchr(imcs_charBuffer, imcs_charTermination[0]), imcs_charTermination) == 0) {
						webserver_broadcast("imcs_operation", imcs_charOperation);
						
						imcs_charOperation[0] = '\0';
						imcs_charBuffer[0] = '\0';
						imcs_charTermination[0] = '\0';
					}
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
		imcs_mgconnectionHandle = mg_connect(imcs_mgmgrHandle, "tcp://svcs.cs.pdx.edu:3589", imcs_handler);
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
		imcs_charOperation[0] = '\0';
		
		imcs_charBuffer[0] = '\0';
		
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
		sprintf(imcs_charOperation, "imcs_register");
		imcs_charBuffer[0] = '\0';
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
		sprintf(imcs_charOperation, "imcs_login");
		imcs_charBuffer[0] = '\0';
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
		sprintf(imcs_charOperation, "imcs_list");
		imcs_charBuffer[0] = '\0';
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
		sprintf(imcs_charOperation, "imcs_offer");
		imcs_charBuffer[0] = '\0';
		sprintf(imcs_charTermination, "\r\n");
		
		mg_printf(imcs_mgconnectionHandle, "offer\n");
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
		sprintf(imcs_charOperation, "imcs_accept");
		imcs_charBuffer[0] = '\0';
		sprintf(imcs_charTermination, "\r\n");
		
		mg_printf(imcs_mgconnectionHandle, "accept %d\n", intIdent);
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
		sprintf(imcs_charOperation, "imcs_ratings");
		imcs_charBuffer[0] = '\0';
		sprintf(imcs_charTermination, ".\r\n");
		
		mg_printf(imcs_mgconnectionHandle, "ratings\n");
	}
}
