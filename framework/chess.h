#ifndef CHESS_H_LOCK
#define CHESS_H_LOCK

void chess_reset();
void chess_boardGet(char* charOut);
void chess_boardSet(char* charIn);
char chess_winner();
bool chess_isValid(int intX, int intY);
bool chess_isEnemy(char charPiece);
bool chess_isOwn(char charPiece);
bool chess_isNothing(char charPiece);
int chess_eval();
int chess_moves(char* charOut);
int chess_movesShuffled(char* charOut);
int chess_movesEvaluated(char* charOut);
void chess_move(char* charIn);
void chess_moveRandom(char* charOut);
void chess_moveGreedy(char* charOut);
void chess_moveNegamax(char* charOut, int intDepth, int intDuration);
void chess_moveAlphabeta(char* charOut, int intDepth, int intDuration);
void chess_undo();

#endif
