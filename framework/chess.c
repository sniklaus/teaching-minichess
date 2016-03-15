#include "main.h"

void chess_reset() {
	{
		cJSON* cjsonOut = cJSON_CreateObject();
		cJSON* cjsonIn = NULL;
		
		{
			cJSON_AddStringToObject(cjsonOut, "strFunction", "chess_reset");
		}
		
		{
			zeromq_send(cjsonOut);
			
			cjsonIn = zeromq_recv();
		}
		
		cJSON_Delete(cjsonOut);
		cJSON_Delete(cjsonIn);
	}
}

void chess_boardGet(char* charOut) {
	{
		cJSON* cjsonOut = cJSON_CreateObject();
		cJSON* cjsonIn = NULL;
		
		{
			cJSON_AddStringToObject(cjsonOut, "strFunction", "chess_boardGet");
		}
		
		{
			zeromq_send(cjsonOut);
			
			cjsonIn = zeromq_recv();
		}
		
		{
			strcpy(charOut, cJSON_GetObjectItem(cjsonIn, "strOut")->valuestring);
		}
		
		cJSON_Delete(cjsonOut);
		cJSON_Delete(cjsonIn);
	}
}

void chess_boardSet(char* charIn) {
	{
		cJSON* cjsonOut = cJSON_CreateObject();
		cJSON* cjsonIn = NULL;
		
		{
			cJSON_AddStringToObject(cjsonOut, "strFunction", "chess_boardSet");

			cJSON_AddStringToObject(cjsonOut, "strIn", charIn);
		}
		
		{
			zeromq_send(cjsonOut);
			
			cjsonIn = zeromq_recv();
		}
		
		cJSON_Delete(cjsonOut);
		cJSON_Delete(cjsonIn);
	}
}

char chess_winner() {
	char charReturn = '?';
	
	{
		cJSON* cjsonOut = cJSON_CreateObject();
		cJSON* cjsonIn = NULL;
		
		{
			cJSON_AddStringToObject(cjsonOut, "strFunction", "chess_winner");
		}
		
		{
			zeromq_send(cjsonOut);
			
			cjsonIn = zeromq_recv();
		}
		
		{
			charReturn = cJSON_GetObjectItem(cjsonIn, "strReturn")->valuestring[0];
		}
		
		cJSON_Delete(cjsonOut);
		cJSON_Delete(cjsonIn);
	}
	
	return charReturn;
}

bool chess_isValid(int intX, int intY) {
	bool boolReturn = false;
	
	{
		cJSON* cjsonOut = cJSON_CreateObject();
		cJSON* cjsonIn = NULL;
		
		{
			cJSON_AddStringToObject(cjsonOut, "strFunction", "chess_isValid");
			
			cJSON_AddNumberToObject(cjsonOut, "intX", intX);

			cJSON_AddNumberToObject(cjsonOut, "intY", intY);
		}
		
		{
			zeromq_send(cjsonOut);
			
			cjsonIn = zeromq_recv();
		}
		
		{
			boolReturn = cJSON_GetObjectItem(cjsonIn, "boolReturn")->valueint;
		}
		
		cJSON_Delete(cjsonOut);
		cJSON_Delete(cjsonIn);
	}
	
	return boolReturn;
}

bool chess_isEnemy(char charPiece) {
	bool boolReturn = false;
	
	{
		cJSON* cjsonOut = cJSON_CreateObject();
		cJSON* cjsonIn = NULL;
		
		{
			cJSON_AddStringToObject(cjsonOut, "strFunction", "chess_isEnemy");
			
			char charPieceWrapped[16] = { };
			
			charPieceWrapped[0] = charPiece;
			charPieceWrapped[1] = '\0';
			
			cJSON_AddStringToObject(cjsonOut, "strPiece", charPieceWrapped);
		}
		
		{
			zeromq_send(cjsonOut);
			
			cjsonIn = zeromq_recv();
		}
		
		{
			boolReturn = cJSON_GetObjectItem(cjsonIn, "boolReturn")->valueint;
		}
		
		cJSON_Delete(cjsonOut);
		cJSON_Delete(cjsonIn);
	}
	
	return boolReturn;
}

bool chess_isOwn(char charPiece) {
	bool boolReturn = false;
	
	{
		cJSON* cjsonOut = cJSON_CreateObject();
		cJSON* cjsonIn = NULL;
		
		{
			cJSON_AddStringToObject(cjsonOut, "strFunction", "chess_isOwn");
			
			char charPieceWrapped[16] = { };
			
			charPieceWrapped[0] = charPiece;
			charPieceWrapped[1] = '\0';
			
			cJSON_AddStringToObject(cjsonOut, "strPiece", charPieceWrapped);
		}
		
		{
			zeromq_send(cjsonOut);
			
			cjsonIn = zeromq_recv();
		}
		
		{
			boolReturn = cJSON_GetObjectItem(cjsonIn, "boolReturn")->valueint;
		}
		
		cJSON_Delete(cjsonOut);
		cJSON_Delete(cjsonIn);
	}
	
	return boolReturn;
}

bool chess_isNothing(char charPiece) {
	bool boolReturn = false;
	
	{
		cJSON* cjsonOut = cJSON_CreateObject();
		cJSON* cjsonIn = NULL;
		
		{
			cJSON_AddStringToObject(cjsonOut, "strFunction", "chess_isNothing");
			
			char charPieceWrapped[16] = { };
			
			charPieceWrapped[0] = charPiece;
			charPieceWrapped[1] = '\0';
			
			cJSON_AddStringToObject(cjsonOut, "strPiece", charPieceWrapped);
		}
		
		{
			zeromq_send(cjsonOut);
			
			cjsonIn = zeromq_recv();
		}
		
		{
			boolReturn = cJSON_GetObjectItem(cjsonIn, "boolReturn")->valueint;
		}
		
		cJSON_Delete(cjsonOut);
		cJSON_Delete(cjsonIn);
	}
	
	return boolReturn;
}

int chess_eval() {
	int intReturn = 0;
	
	{
		cJSON* cjsonOut = cJSON_CreateObject();
		cJSON* cjsonIn = NULL;
		
		{
			cJSON_AddStringToObject(cjsonOut, "strFunction", "chess_eval");
		}
		
		{
			zeromq_send(cjsonOut);
			
			cjsonIn = zeromq_recv();
		}
		
		{
			intReturn = cJSON_GetObjectItem(cjsonIn, "intReturn")->valueint;
		}
		
		cJSON_Delete(cjsonOut);
		cJSON_Delete(cjsonIn);
	}
	
	return intReturn;
}

int chess_moves(char* charOut) {
	int intReturn = 0;

	{
		cJSON* cjsonOut = cJSON_CreateObject();
		cJSON* cjsonIn = NULL;
		
		{
			cJSON_AddStringToObject(cjsonOut, "strFunction", "chess_moves");
		}
		
		{
			zeromq_send(cjsonOut);
			
			cjsonIn = zeromq_recv();
		}
		
		{
			intReturn = cJSON_GetObjectItem(cjsonIn, "intOut")->valueint;
			
			strcpy(charOut, cJSON_GetObjectItem(cjsonIn, "strOut")->valuestring);
		}
		
		cJSON_Delete(cjsonOut);
		cJSON_Delete(cjsonIn);
	}

	return intReturn;
}

int chess_movesShuffled(char* charOut) {
	int intReturn = 0;

	{
		cJSON* cjsonOut = cJSON_CreateObject();
		cJSON* cjsonIn = NULL;
		
		{
			cJSON_AddStringToObject(cjsonOut, "strFunction", "chess_movesShuffled");
		}
		
		{
			zeromq_send(cjsonOut);
			
			cjsonIn = zeromq_recv();
		}
		
		{
			intReturn = cJSON_GetObjectItem(cjsonIn, "intOut")->valueint;
			
			strcpy(charOut, cJSON_GetObjectItem(cjsonIn, "strOut")->valuestring);
		}
		
		cJSON_Delete(cjsonOut);
		cJSON_Delete(cjsonIn);
	}

	return intReturn;
}

int chess_movesEvaluated(char* charOut) {
	int intReturn = 0;

	{
		cJSON* cjsonOut = cJSON_CreateObject();
		cJSON* cjsonIn = NULL;
		
		{
			cJSON_AddStringToObject(cjsonOut, "strFunction", "chess_movesEvaluated");
		}
		
		{
			zeromq_send(cjsonOut);
			
			cjsonIn = zeromq_recv();
		}
		
		{
			intReturn = cJSON_GetObjectItem(cjsonIn, "intOut")->valueint;
			
			strcpy(charOut, cJSON_GetObjectItem(cjsonIn, "strOut")->valuestring);
		}
		
		cJSON_Delete(cjsonOut);
		cJSON_Delete(cjsonIn);
	}

	return intReturn;
}

void chess_move(char* charIn) {
	{
		cJSON* cjsonOut = cJSON_CreateObject();
		cJSON* cjsonIn = NULL;
		
		{
			cJSON_AddStringToObject(cjsonOut, "strFunction", "chess_move");

			cJSON_AddStringToObject(cjsonOut, "strIn", charIn);
		}
		
		{
			zeromq_send(cjsonOut);
			
			cjsonIn = zeromq_recv();
		}
		
		cJSON_Delete(cjsonOut);
		cJSON_Delete(cjsonIn);
	}
}

void chess_moveRandom(char* charOut) {
	{
		cJSON* cjsonOut = cJSON_CreateObject();
		cJSON* cjsonIn = NULL;
		
		{
			cJSON_AddStringToObject(cjsonOut, "strFunction", "chess_moveRandom");
		}
		
		{
			zeromq_send(cjsonOut);
			
			cjsonIn = zeromq_recv();
		}
		
		{
			strcpy(charOut, cJSON_GetObjectItem(cjsonIn, "strOut")->valuestring);
		}
		
		cJSON_Delete(cjsonOut);
		cJSON_Delete(cjsonIn);
	}
}

void chess_moveGreedy(char* charOut) {
	{
		cJSON* cjsonOut = cJSON_CreateObject();
		cJSON* cjsonIn = NULL;
		
		{
			cJSON_AddStringToObject(cjsonOut, "strFunction", "chess_moveGreedy");
		}
		
		{
			zeromq_send(cjsonOut);
			
			cjsonIn = zeromq_recv();
		}
		
		{
			strcpy(charOut, cJSON_GetObjectItem(cjsonIn, "strOut")->valuestring);
		}
		
		cJSON_Delete(cjsonOut);
		cJSON_Delete(cjsonIn);
	}
}

void chess_moveNegamax(char* charOut, int intDepth, int intDuration) {
	{
		cJSON* cjsonOut = cJSON_CreateObject();
		cJSON* cjsonIn = NULL;
		
		{
			cJSON_AddStringToObject(cjsonOut, "strFunction", "chess_moveNegamax");
			
			cJSON_AddNumberToObject(cjsonOut, "intDepth", intDepth);

			cJSON_AddNumberToObject(cjsonOut, "intDuration", intDuration);
		}
		
		{
			zeromq_send(cjsonOut);
			
			cjsonIn = zeromq_recv();
		}
		
		{
			strcpy(charOut, cJSON_GetObjectItem(cjsonIn, "strOut")->valuestring);
		}
		
		cJSON_Delete(cjsonOut);
		cJSON_Delete(cjsonIn);
	}
}

void chess_moveAlphabeta(char* charOut, int intDepth, int intDuration) {
	{
		cJSON* cjsonOut = cJSON_CreateObject();
		cJSON* cjsonIn = NULL;
		
		{
			cJSON_AddStringToObject(cjsonOut, "strFunction", "chess_moveAlphabeta");
			
			cJSON_AddNumberToObject(cjsonOut, "intDepth", intDepth);

			cJSON_AddNumberToObject(cjsonOut, "intDuration", intDuration);
		}
		
		{
			zeromq_send(cjsonOut);
			
			cjsonIn = zeromq_recv();
		}
		
		{
			strcpy(charOut, cJSON_GetObjectItem(cjsonIn, "strOut")->valuestring);
		}
		
		cJSON_Delete(cjsonOut);
		cJSON_Delete(cjsonIn);
	}
}

void chess_undo() {
	{
		cJSON* cjsonOut = cJSON_CreateObject();
		cJSON* cjsonIn = NULL;
		
		{
			cJSON_AddStringToObject(cjsonOut, "strFunction", "chess_undo");
		}
		
		{
			zeromq_send(cjsonOut);
			
			cjsonIn = zeromq_recv();
		}
		
		cJSON_Delete(cjsonOut);
		cJSON_Delete(cjsonIn);
	}
}
