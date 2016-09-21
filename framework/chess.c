#include "main.h"

void chess_reset() {
	{
		cJSON* objectOut = cJSON_CreateObject();
		cJSON* objectIn = NULL;
		
		{
			cJSON_AddStringToObject(objectOut, "strFunction", "chess_reset");
		}
		
		{
			zeromq_send(objectOut);
			
			objectIn = zeromq_recv();
		}
		
		cJSON_Delete(objectOut);
		cJSON_Delete(objectIn);
	}
}

void chess_boardGet(char* charOut) {
	{
		cJSON* objectOut = cJSON_CreateObject();
		cJSON* objectIn = NULL;
		
		{
			cJSON_AddStringToObject(objectOut, "strFunction", "chess_boardGet");
		}
		
		{
			zeromq_send(objectOut);
			
			objectIn = zeromq_recv();
		}
		
		{
			strcpy(charOut, cJSON_GetObjectItem(objectIn, "strOut")->valuestring);
		}
		
		cJSON_Delete(objectOut);
		cJSON_Delete(objectIn);
	}
}

void chess_boardSet(char* charIn) {
	{
		cJSON* objectOut = cJSON_CreateObject();
		cJSON* objectIn = NULL;
		
		{
			cJSON_AddStringToObject(objectOut, "strFunction", "chess_boardSet");

			cJSON_AddStringToObject(objectOut, "strIn", charIn);
		}
		
		{
			zeromq_send(objectOut);
			
			objectIn = zeromq_recv();
		}
		
		cJSON_Delete(objectOut);
		cJSON_Delete(objectIn);
	}
}

char chess_winner() {
	char charReturn = '?';
	
	{
		cJSON* objectOut = cJSON_CreateObject();
		cJSON* objectIn = NULL;
		
		{
			cJSON_AddStringToObject(objectOut, "strFunction", "chess_winner");
		}
		
		{
			zeromq_send(objectOut);
			
			objectIn = zeromq_recv();
		}
		
		{
			charReturn = cJSON_GetObjectItem(objectIn, "strReturn")->valuestring[0];
		}
		
		cJSON_Delete(objectOut);
		cJSON_Delete(objectIn);
	}
	
	return charReturn;
}

bool chess_isValid(int intX, int intY) {
	bool boolReturn = false;
	
	{
		cJSON* objectOut = cJSON_CreateObject();
		cJSON* objectIn = NULL;
		
		{
			cJSON_AddStringToObject(objectOut, "strFunction", "chess_isValid");
			
			cJSON_AddNumberToObject(objectOut, "intX", intX);

			cJSON_AddNumberToObject(objectOut, "intY", intY);
		}
		
		{
			zeromq_send(objectOut);
			
			objectIn = zeromq_recv();
		}
		
		{
			boolReturn = cJSON_GetObjectItem(objectIn, "boolReturn")->valueint;
		}
		
		cJSON_Delete(objectOut);
		cJSON_Delete(objectIn);
	}
	
	return boolReturn;
}

bool chess_isEnemy(char charPiece) {
	bool boolReturn = false;
	
	{
		cJSON* objectOut = cJSON_CreateObject();
		cJSON* objectIn = NULL;
		
		{
			cJSON_AddStringToObject(objectOut, "strFunction", "chess_isEnemy");
			
			char charPieceWrapped[16] = { };
			
			charPieceWrapped[0] = charPiece;
			charPieceWrapped[1] = '\0';
			
			cJSON_AddStringToObject(objectOut, "strPiece", charPieceWrapped);
		}
		
		{
			zeromq_send(objectOut);
			
			objectIn = zeromq_recv();
		}
		
		{
			boolReturn = cJSON_GetObjectItem(objectIn, "boolReturn")->valueint;
		}
		
		cJSON_Delete(objectOut);
		cJSON_Delete(objectIn);
	}
	
	return boolReturn;
}

bool chess_isOwn(char charPiece) {
	bool boolReturn = false;
	
	{
		cJSON* objectOut = cJSON_CreateObject();
		cJSON* objectIn = NULL;
		
		{
			cJSON_AddStringToObject(objectOut, "strFunction", "chess_isOwn");
			
			char charPieceWrapped[16] = { };
			
			charPieceWrapped[0] = charPiece;
			charPieceWrapped[1] = '\0';
			
			cJSON_AddStringToObject(objectOut, "strPiece", charPieceWrapped);
		}
		
		{
			zeromq_send(objectOut);
			
			objectIn = zeromq_recv();
		}
		
		{
			boolReturn = cJSON_GetObjectItem(objectIn, "boolReturn")->valueint;
		}
		
		cJSON_Delete(objectOut);
		cJSON_Delete(objectIn);
	}
	
	return boolReturn;
}

bool chess_isNothing(char charPiece) {
	bool boolReturn = false;
	
	{
		cJSON* objectOut = cJSON_CreateObject();
		cJSON* objectIn = NULL;
		
		{
			cJSON_AddStringToObject(objectOut, "strFunction", "chess_isNothing");
			
			char charPieceWrapped[16] = { };
			
			charPieceWrapped[0] = charPiece;
			charPieceWrapped[1] = '\0';
			
			cJSON_AddStringToObject(objectOut, "strPiece", charPieceWrapped);
		}
		
		{
			zeromq_send(objectOut);
			
			objectIn = zeromq_recv();
		}
		
		{
			boolReturn = cJSON_GetObjectItem(objectIn, "boolReturn")->valueint;
		}
		
		cJSON_Delete(objectOut);
		cJSON_Delete(objectIn);
	}
	
	return boolReturn;
}

int chess_eval() {
	int intReturn = 0;
	
	{
		cJSON* objectOut = cJSON_CreateObject();
		cJSON* objectIn = NULL;
		
		{
			cJSON_AddStringToObject(objectOut, "strFunction", "chess_eval");
		}
		
		{
			zeromq_send(objectOut);
			
			objectIn = zeromq_recv();
		}
		
		{
			intReturn = cJSON_GetObjectItem(objectIn, "intReturn")->valueint;
		}
		
		cJSON_Delete(objectOut);
		cJSON_Delete(objectIn);
	}
	
	return intReturn;
}

int chess_moves(char* charOut) {
	int intReturn = 0;

	{
		cJSON* objectOut = cJSON_CreateObject();
		cJSON* objectIn = NULL;
		
		{
			cJSON_AddStringToObject(objectOut, "strFunction", "chess_moves");
		}
		
		{
			zeromq_send(objectOut);
			
			objectIn = zeromq_recv();
		}
		
		{
			intReturn = cJSON_GetObjectItem(objectIn, "intOut")->valueint;
			
			strcpy(charOut, cJSON_GetObjectItem(objectIn, "strOut")->valuestring);
		}
		
		cJSON_Delete(objectOut);
		cJSON_Delete(objectIn);
	}

	return intReturn;
}

int chess_movesShuffled(char* charOut) {
	int intReturn = 0;

	{
		cJSON* objectOut = cJSON_CreateObject();
		cJSON* objectIn = NULL;
		
		{
			cJSON_AddStringToObject(objectOut, "strFunction", "chess_movesShuffled");
		}
		
		{
			zeromq_send(objectOut);
			
			objectIn = zeromq_recv();
		}
		
		{
			intReturn = cJSON_GetObjectItem(objectIn, "intOut")->valueint;
			
			strcpy(charOut, cJSON_GetObjectItem(objectIn, "strOut")->valuestring);
		}
		
		cJSON_Delete(objectOut);
		cJSON_Delete(objectIn);
	}

	return intReturn;
}

int chess_movesEvaluated(char* charOut) {
	int intReturn = 0;

	{
		cJSON* objectOut = cJSON_CreateObject();
		cJSON* objectIn = NULL;
		
		{
			cJSON_AddStringToObject(objectOut, "strFunction", "chess_movesEvaluated");
		}
		
		{
			zeromq_send(objectOut);
			
			objectIn = zeromq_recv();
		}
		
		{
			intReturn = cJSON_GetObjectItem(objectIn, "intOut")->valueint;
			
			strcpy(charOut, cJSON_GetObjectItem(objectIn, "strOut")->valuestring);
		}
		
		cJSON_Delete(objectOut);
		cJSON_Delete(objectIn);
	}

	return intReturn;
}

void chess_move(char* charIn) {
	{
		cJSON* objectOut = cJSON_CreateObject();
		cJSON* objectIn = NULL;
		
		{
			cJSON_AddStringToObject(objectOut, "strFunction", "chess_move");

			cJSON_AddStringToObject(objectOut, "strIn", charIn);
		}
		
		{
			zeromq_send(objectOut);
			
			objectIn = zeromq_recv();
		}
		
		cJSON_Delete(objectOut);
		cJSON_Delete(objectIn);
	}
}

void chess_moveRandom(char* charOut) {
	{
		cJSON* objectOut = cJSON_CreateObject();
		cJSON* objectIn = NULL;
		
		{
			cJSON_AddStringToObject(objectOut, "strFunction", "chess_moveRandom");
		}
		
		{
			zeromq_send(objectOut);
			
			objectIn = zeromq_recv();
		}
		
		{
			strcpy(charOut, cJSON_GetObjectItem(objectIn, "strOut")->valuestring);
		}
		
		cJSON_Delete(objectOut);
		cJSON_Delete(objectIn);
	}
}

void chess_moveGreedy(char* charOut) {
	{
		cJSON* objectOut = cJSON_CreateObject();
		cJSON* objectIn = NULL;
		
		{
			cJSON_AddStringToObject(objectOut, "strFunction", "chess_moveGreedy");
		}
		
		{
			zeromq_send(objectOut);
			
			objectIn = zeromq_recv();
		}
		
		{
			strcpy(charOut, cJSON_GetObjectItem(objectIn, "strOut")->valuestring);
		}
		
		cJSON_Delete(objectOut);
		cJSON_Delete(objectIn);
	}
}

void chess_moveNegamax(char* charOut, int intDepth, int intDuration) {
	{
		cJSON* objectOut = cJSON_CreateObject();
		cJSON* objectIn = NULL;
		
		{
			cJSON_AddStringToObject(objectOut, "strFunction", "chess_moveNegamax");
			
			cJSON_AddNumberToObject(objectOut, "intDepth", intDepth);

			cJSON_AddNumberToObject(objectOut, "intDuration", intDuration);
		}
		
		{
			zeromq_send(objectOut);
			
			objectIn = zeromq_recv();
		}
		
		{
			strcpy(charOut, cJSON_GetObjectItem(objectIn, "strOut")->valuestring);
		}
		
		cJSON_Delete(objectOut);
		cJSON_Delete(objectIn);
	}
}

void chess_moveAlphabeta(char* charOut, int intDepth, int intDuration) {
	{
		cJSON* objectOut = cJSON_CreateObject();
		cJSON* objectIn = NULL;
		
		{
			cJSON_AddStringToObject(objectOut, "strFunction", "chess_moveAlphabeta");
			
			cJSON_AddNumberToObject(objectOut, "intDepth", intDepth);

			cJSON_AddNumberToObject(objectOut, "intDuration", intDuration);
		}
		
		{
			zeromq_send(objectOut);
			
			objectIn = zeromq_recv();
		}
		
		{
			strcpy(charOut, cJSON_GetObjectItem(objectIn, "strOut")->valuestring);
		}
		
		cJSON_Delete(objectOut);
		cJSON_Delete(objectIn);
	}
}

void chess_undo() {
	{
		cJSON* objectOut = cJSON_CreateObject();
		cJSON* objectIn = NULL;
		
		{
			cJSON_AddStringToObject(objectOut, "strFunction", "chess_undo");
		}
		
		{
			zeromq_send(objectOut);
			
			objectIn = zeromq_recv();
		}
		
		cJSON_Delete(objectOut);
		cJSON_Delete(objectIn);
	}
}
