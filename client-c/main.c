#include "main.h"

void main_sigint() {
	{
		zeromq_stop();
	}
}

int main(int argc, char** argv) {
	{
		srand(milliseconds());
	}

	{
		signal(SIGINT, main_sigint);
	}
	
	{
		zeromq_start("tcp", "YOUR NAME");
	}
	
	return 0;
}
