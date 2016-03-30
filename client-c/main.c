#include "main.h"

int main_intZeromq = 54361; // CHANGE THIS - OPTIONAL
char* main_charName = "YOUR NAME"; // CHANGE THIS - REQUIRED

void main_sigint() {
	{
		zeromq_stop();
	}
}

int main(int argc, char** argv) {
	{
		assert(main_intZeromq > 1024);
		assert(main_intZeromq < 65535);
		
		assert(strlen(main_charName) > 2);
		assert(strlen(main_charName) < 16);
		assert(strstr(main_charName, " ") == NULL);
	}
	
	{
		srand(milliseconds());
	}
	
	{
		signal(SIGINT, main_sigint);
	}
	
	{
		zeromq_start();
	}
	
	return 0;
}
