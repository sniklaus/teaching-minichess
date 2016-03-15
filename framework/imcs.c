#include "main.h"

void imcs_handler(struct mg_connection* mgconnectionHandle, int intEvent, void* voidData) {
	if (intEvent == MG_EV_ACCEPT) {
		printf("MG_EV_ACCEPT\n");
		
	} else if (intEvent == MG_EV_CONNECT) {
		printf("MG_EV_CONNECT\n");
		
	} else if (intEvent == MG_EV_CLOSE) {
		printf("MG_EV_CLOSE\n");
		
	} else if (intEvent == MG_EV_RECV) {
		printf("MG_EV_RECV\n");
		fwrite(mgconnectionHandle->recv_mbuf.buf, 1, mgconnectionHandle->recv_mbuf.len, stdout);
		mbuf_remove(&mgconnectionHandle->recv_mbuf, mgconnectionHandle->recv_mbuf.len);
		
	}
}

pthread_mutex_t imcs_pthreadmutexRunning = PTHREAD_MUTEX_INITIALIZER;

void imcs_thread() {
	{
		struct mg_mgr mgmgrHandle = { };
		
		mg_mgr_init(&mgmgrHandle, NULL);
		
		{
			mg_connect(&mgmgrHandle, "tcp://svcs.cs.pdx.edu:3589", imcs_handler);
		}
		
		{
			do {
				mg_mgr_poll(&mgmgrHandle, 1000);
			} while (pthread_mutex_trylock(&imcs_pthreadmutexRunning) != 0);
			
			pthread_mutex_unlock(&imcs_pthreadmutexRunning);
		}
		
		mg_mgr_free(&mgmgrHandle);
	}
}

void imcs_start() {
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
