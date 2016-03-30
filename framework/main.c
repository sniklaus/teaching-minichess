#include "main.h"

int main_intWebserver = 8080; // CHANGE THIS - OPTIONAL
int main_intZeromq = 54361; // CHANGE THIS - OPTIONAL

int main(int argc, char** argv) {
	{
		assert(main_intWebserver > 1024);
		assert(main_intWebserver < 65535);
		
		assert(main_intZeromq > 1024);
		assert(main_intZeromq < 65535);
	}
	
	{
		srand(milliseconds());
	}
	
	{
		zeromq_start();
		
		webserver_start();
		
		imcs_start();
	}
	
	{
		printf("framework: started\n");
	}
	
	{
		pthread_exit(NULL);
	}
	
	{
		printf("framework: stopped\n");
	}
	
	return 0;
}
