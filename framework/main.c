#include "main.h"

int main(int argc, char** argv) {
	{
		srand(milliseconds());
	}
	
	{
		zeromq_start("tcp");
		
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
