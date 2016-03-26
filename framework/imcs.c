#include "main.h"

// TOOD: ENFORCE MUTUAL EXCLUSION

struct mg_mgr* imcs_mgmgrHandle = NULL;
struct mg_connection* imcs_mgconnectionHandle = NULL;

bool imcs_boolConnected = false;
bool imcs_boolAuthorized = false;

sem_t imcs_semTermination = { };
char imcs_charTermination[16] = { };
char imcs_charBuffer[1024] = { };

pthread_mutex_t imcs_pthreadmutexRunning = PTHREAD_MUTEX_INITIALIZER;

void imcs_handler(struct mg_connection* mgconnectionHandle, int intEvent, void* voidData) {
	if (intEvent == MG_EV_CONNECT) {
		{
			imcs_mgconnectionHandle = mgconnectionHandle;
		}
		
		{
			imcs_boolConnected = true;
			
			webserver_broadcast("imcs_status", NULL);
		}
		
	} else if (intEvent == MG_EV_CLOSE) {
		{
			imcs_mgconnectionHandle = NULL;
		}
		
		{
			imcs_boolConnected = false;
			
			webserver_broadcast("imcs_status", NULL);
		}
		
	} else if (intEvent == MG_EV_RECV) {
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
						imcs_charTermination[0] = '\0';
						
						sem_post(&imcs_semTermination);
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
		mg_connect(imcs_mgmgrHandle, "tcp://svcs.cs.pdx.edu:3589", imcs_handler);
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
		imcs_mgmgrHandle = (struct mg_mgr*) (malloc(sizeof(struct mg_mgr)));
		
		imcs_mgconnectionHandle = NULL;
	}
	
	{
		imcs_boolConnected = false;
		
		imcs_boolAuthorized = false;
	}
	
	{
		sem_init(&imcs_semTermination, 0, 0);
		
		imcs_charTermination[0] = '\0';
		
		imcs_charBuffer[0] = '\0';
	}
	
	{
		pthread_mutex_init(&imcs_pthreadmutexRunning, NULL);
		
		pthread_mutex_lock(&imcs_pthreadmutexRunning);
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
	bool boolConnected = false;
	
	{
		boolConnected = imcs_boolConnected;
	}
	
	return boolConnected;
}

bool imcs_authorized() {
	bool boolAuthorized = false;
	
	{
		boolAuthorized = imcs_boolAuthorized;
	}
	
	return boolAuthorized;
}

void imcs_buffer(char* charBuffer) {
	strcpy(charBuffer, imcs_charBuffer);
	
	imcs_charBuffer[0] = '\0';
}

void imcs_register(char* charUser, char* charPass) {
	{
		sprintf(imcs_charBuffer + strlen(imcs_charBuffer), "register %s\n", charUser);
	}
	
	{
		imcs_charTermination[0] = '\r';
		imcs_charTermination[1] = '\n';
		imcs_charTermination[2] = '\0';
		
		mg_printf(imcs_mgconnectionHandle, "register %s %s\n", charUser, charPass);
		
		sem_wait(&imcs_semTermination);
	}
}

void imcs_login(char* charUser, char* charPass) {
	{
		sprintf(imcs_charBuffer + strlen(imcs_charBuffer), "me %s\n", charUser);
	}
	
	{
		imcs_charTermination[0] = '\r';
		imcs_charTermination[1] = '\n';
		imcs_charTermination[2] = '\0';
		
		mg_printf(imcs_mgconnectionHandle, "me %s %s\n", charUser, charPass);
		
		sem_wait(&imcs_semTermination);
	}
}

void imcs_list() {
	{
		sprintf(imcs_charBuffer + strlen(imcs_charBuffer), "list\n");
	}
	
	{
		imcs_charTermination[0] = '.';
		imcs_charTermination[1] = '\r';
		imcs_charTermination[2] = '\n';
		imcs_charTermination[3] = '\0';
		
		mg_printf(imcs_mgconnectionHandle, "list\n");
		
		sem_wait(&imcs_semTermination);
	}
}

void imcs_offer() {
	{
		imcs_charTermination[0] = '\r';
		imcs_charTermination[1] = '\n';
		imcs_charTermination[2] = '\0';
		
		mg_printf(imcs_mgconnectionHandle, "clean\n");
		
		sem_wait(&imcs_semTermination);
	}
	
	{
		imcs_charTermination[0] = '\r';
		imcs_charTermination[1] = '\n';
		imcs_charTermination[2] = '\0';
		
		mg_printf(imcs_mgconnectionHandle, "offer\n");
		
		sem_wait(&imcs_semTermination);
	}
}

void imcs_accept() {
	{
		imcs_charTermination[0] = '\r';
		imcs_charTermination[1] = '\n';
		imcs_charTermination[2] = '\0';
		
		mg_printf(imcs_mgconnectionHandle, "clean\n");
		
		sem_wait(&imcs_semTermination);
	}
	
	{
		imcs_charTermination[0] = '\r';
		imcs_charTermination[1] = '\n';
		imcs_charTermination[2] = '\0';
		
		mg_printf(imcs_mgconnectionHandle, "accept\n");
		
		sem_wait(&imcs_semTermination);
	}
}
