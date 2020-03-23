#include "main.h"

void chess_reset() {
	{
		cJSON* objOut = cJSON_CreateObject();
		cJSON* objIn = NULL;
		
		{
			cJSON_AddStringToObject(objOut, "strFunction", "chess_reset");
		}
		
		{
			zeromq_send(objOut);
			
			objIn = zeromq_recv();
		}
		
		cJSON_Delete(objOut);
		cJSON_Delete(objIn);
	}
}

void chess_boardGet(char* charOut) {
	{
		cJSON* objOut = cJSON_CreateObject();
		cJSON* objIn = NULL;
		
		{
			cJSON_AddStringToObject(objOut, "strFunction", "chess_boardGet");
		}
		
		{
			zeromq_send(objOut);
			
			objIn = zeromq_recv();
		}
		
		{
			strcpy(charOut, cJSON_GetObjectItem(objIn, "strOut")->valuestring);
		}
		
		cJSON_Delete(objOut);
		cJSON_Delete(objIn);
	}
}

void chess_boardSet(char* charIn) {
	{
		cJSON* objOut = cJSON_CreateObject();
		cJSON* objIn = NULL;
		
		{
			cJSON_AddStringToObject(objOut, "strFunction", "chess_boardSet");

			cJSON_AddStringToObject(objOut, "strIn", charIn);
		}
		
		{
			zeromq_send(objOut);
			
			objIn = zeromq_recv();
		}
		
		cJSON_Delete(objOut);
		cJSON_Delete(objIn);
	}
}

char chess_winner() {
	char charReturn = '?';
	
	{
		cJSON* objOut = cJSON_CreateObject();
		cJSON* objIn = NULL;
		
		{
			cJSON_AddStringToObject(objOut, "strFunction", "chess_winner");
		}
		
		{
			zeromq_send(objOut);
			
			objIn = zeromq_recv();
		}
		
		{
			charReturn = cJSON_GetObjectItem(objIn, "strReturn")->valuestring[0];
		}
		
		cJSON_Delete(objOut);
		cJSON_Delete(objIn);
	}
	
	return charReturn;
}

bool chess_isValid(int intX, int intY) {
	bool boolReturn = false;
	
	{
		cJSON* objOut = cJSON_CreateObject();
		cJSON* objIn = NULL;
		
		{
			cJSON_AddStringToObject(objOut, "strFunction", "chess_isValid");
			
			cJSON_AddNumberToObject(objOut, "intX", intX);

			cJSON_AddNumberToObject(objOut, "intY", intY);
		}
		
		{
			zeromq_send(objOut);
			
			objIn = zeromq_recv();
		}
		
		{
			boolReturn = cJSON_GetObjectItem(objIn, "boolReturn")->valueint;
		}
		
		cJSON_Delete(objOut);
		cJSON_Delete(objIn);
	}
	
	return boolReturn;
}

bool chess_isEnemy(char charPiece) {
	bool boolReturn = false;
	
	{
		cJSON* objOut = cJSON_CreateObject();
		cJSON* objIn = NULL;
		
		{
			cJSON_AddStringToObject(objOut, "strFunction", "chess_isEnemy");
			
			char charPieceWrapped[16] = { };
			
			charPieceWrapped[0] = charPiece;
			charPieceWrapped[1] = '\0';
			
			cJSON_AddStringToObject(objOut, "strPiece", charPieceWrapped);
		}
		
		{
			zeromq_send(objOut);
			
			objIn = zeromq_recv();
		}
		
		{
			boolReturn = cJSON_GetObjectItem(objIn, "boolReturn")->valueint;
		}
		
		cJSON_Delete(objOut);
		cJSON_Delete(objIn);
	}
	
	return boolReturn;
}

bool chess_isOwn(char charPiece) {
	bool boolReturn = false;
	
	{
		cJSON* objOut = cJSON_CreateObject();
		cJSON* objIn = NULL;
		
		{
			cJSON_AddStringToObject(objOut, "strFunction", "chess_isOwn");
			
			char charPieceWrapped[16] = { };
			
			charPieceWrapped[0] = charPiece;
			charPieceWrapped[1] = '\0';
			
			cJSON_AddStringToObject(objOut, "strPiece", charPieceWrapped);
		}
		
		{
			zeromq_send(objOut);
			
			objIn = zeromq_recv();
		}
		
		{
			boolReturn = cJSON_GetObjectItem(objIn, "boolReturn")->valueint;
		}
		
		cJSON_Delete(objOut);
		cJSON_Delete(objIn);
	}
	
	return boolReturn;
}

bool chess_isNothing(char charPiece) {
	bool boolReturn = false;
	
	{
		cJSON* objOut = cJSON_CreateObject();
		cJSON* objIn = NULL;
		
		{
			cJSON_AddStringToObject(objOut, "strFunction", "chess_isNothing");
			
			char charPieceWrapped[16] = { };
			
			charPieceWrapped[0] = charPiece;
			charPieceWrapped[1] = '\0';
			
			cJSON_AddStringToObject(objOut, "strPiece", charPieceWrapped);
		}
		
		{
			zeromq_send(objOut);
			
			objIn = zeromq_recv();
		}
		
		{
			boolReturn = cJSON_GetObjectItem(objIn, "boolReturn")->valueint;
		}
		
		cJSON_Delete(objOut);
		cJSON_Delete(objIn);
	}
	
	return boolReturn;
}

int chess_eval() {
	int intReturn = 0;
	
	{
		cJSON* objOut = cJSON_CreateObject();
		cJSON* objIn = NULL;
		
		{
			cJSON_AddStringToObject(objOut, "strFunction", "chess_eval");
		}
		
		{
			zeromq_send(objOut);
			
			objIn = zeromq_recv();
		}
		
		{
			intReturn = cJSON_GetObjectItem(objIn, "intReturn")->valueint;
		}
		
		cJSON_Delete(objOut);
		cJSON_Delete(objIn);
	}
	
	return intReturn;
}

int chess_moves(char* charOut) {
	int intReturn = 0;

	{
		cJSON* objOut = cJSON_CreateObject();
		cJSON* objIn = NULL;
		
		{
			cJSON_AddStringToObject(objOut, "strFunction", "chess_moves");
		}
		
		{
			zeromq_send(objOut);
			
			objIn = zeromq_recv();
		}
		
		{
			intReturn = cJSON_GetObjectItem(objIn, "intOut")->valueint;
			
			strcpy(charOut, cJSON_GetObjectItem(objIn, "strOut")->valuestring);
		}
		
		cJSON_Delete(objOut);
		cJSON_Delete(objIn);
	}

	return intReturn;
}

int chess_movesShuffled(char* charOut) {
	int intReturn = 0;

	{
		cJSON* objOut = cJSON_CreateObject();
		cJSON* objIn = NULL;
		
		{
			cJSON_AddStringToObject(objOut, "strFunction", "chess_movesShuffled");
		}
		
		{
			zeromq_send(objOut);
			
			objIn = zeromq_recv();
		}
		
		{
			intReturn = cJSON_GetObjectItem(objIn, "intOut")->valueint;
			
			strcpy(charOut, cJSON_GetObjectItem(objIn, "strOut")->valuestring);
		}
		
		cJSON_Delete(objOut);
		cJSON_Delete(objIn);
	}

	return intReturn;
}

int chess_movesEvaluated(char* charOut) {
	int intReturn = 0;

	{
		cJSON* objOut = cJSON_CreateObject();
		cJSON* objIn = NULL;
		
		{
			cJSON_AddStringToObject(objOut, "strFunction", "chess_movesEvaluated");
		}
		
		{
			zeromq_send(objOut);
			
			objIn = zeromq_recv();
		}
		
		{
			intReturn = cJSON_GetObjectItem(objIn, "intOut")->valueint;
			
			strcpy(charOut, cJSON_GetObjectItem(objIn, "strOut")->valuestring);
		}
		
		cJSON_Delete(objOut);
		cJSON_Delete(objIn);
	}

	return intReturn;
}

void chess_move(char* charIn) {
	{
		cJSON* objOut = cJSON_CreateObject();
		cJSON* objIn = NULL;
		
		{
			cJSON_AddStringToObject(objOut, "strFunction", "chess_move");

			cJSON_AddStringToObject(objOut, "strIn", charIn);
		}
		
		{
			zeromq_send(objOut);
			
			objIn = zeromq_recv();
		}
		
		cJSON_Delete(objOut);
		cJSON_Delete(objIn);
	}
}

void chess_moveRandom(char* charOut) {
	{
		cJSON* objOut = cJSON_CreateObject();
		cJSON* objIn = NULL;
		
		{
			cJSON_AddStringToObject(objOut, "strFunction", "chess_moveRandom");
		}
		
		{
			zeromq_send(objOut);
			
			objIn = zeromq_recv();
		}
		
		{
			strcpy(charOut, cJSON_GetObjectItem(objIn, "strOut")->valuestring);
		}
		
		cJSON_Delete(objOut);
		cJSON_Delete(objIn);
	}
}

void chess_moveGreedy(char* charOut) {
	{
		cJSON* objOut = cJSON_CreateObject();
		cJSON* objIn = NULL;
		
		{
			cJSON_AddStringToObject(objOut, "strFunction", "chess_moveGreedy");
		}
		
		{
			zeromq_send(objOut);
			
			objIn = zeromq_recv();
		}
		
		{
			strcpy(charOut, cJSON_GetObjectItem(objIn, "strOut")->valuestring);
		}
		
		cJSON_Delete(objOut);
		cJSON_Delete(objIn);
	}
}

void chess_moveNegamax(char* charOut, int intMaxdepth, int intDuration) {
	{
		cJSON* objOut = cJSON_CreateObject();
		cJSON* objIn = NULL;
		
		{
			cJSON_AddStringToObject(objOut, "strFunction", "chess_moveNegamax");
			
			cJSON_AddNumberToObject(objOut, "intMaxdepth", intMaxdepth);

			cJSON_AddNumberToObject(objOut, "intDuration", intDuration);
		}
		
		{
			zeromq_send(objOut);
			
			objIn = zeromq_recv();
		}
		
		{
			strcpy(charOut, cJSON_GetObjectItem(objIn, "strOut")->valuestring);
		}
		
		cJSON_Delete(objOut);
		cJSON_Delete(objIn);
	}
}

void chess_moveAlphabeta(char* charOut, int intMaxdepth, int intDuration) {
	{
		cJSON* objOut = cJSON_CreateObject();
		cJSON* objIn = NULL;
		
		{
			cJSON_AddStringToObject(objOut, "strFunction", "chess_moveAlphabeta");
			
			cJSON_AddNumberToObject(objOut, "intMaxdepth", intMaxdepth);

			cJSON_AddNumberToObject(objOut, "intDuration", intDuration);
		}
		
		{
			zeromq_send(objOut);
			
			objIn = zeromq_recv();
		}
		
		{
			strcpy(charOut, cJSON_GetObjectItem(objIn, "strOut")->valuestring);
		}
		
		cJSON_Delete(objOut);
		cJSON_Delete(objIn);
	}
}

void chess_undo() {
	{
		cJSON* objOut = cJSON_CreateObject();
		cJSON* objIn = NULL;
		
		{
			cJSON_AddStringToObject(objOut, "strFunction", "chess_undo");
		}
		
		{
			zeromq_send(objOut);
			
			objIn = zeromq_recv();
		}
		
		cJSON_Delete(objOut);
		cJSON_Delete(objIn);
	}
}
