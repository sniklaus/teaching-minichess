#ifndef CHESS_H_LOCK
#define CHESS_H_LOCK

void chess_reset() __asm ("chess_reset");
void chess_boardGet(char* charOut) __asm ("chess_boardGet");
void chess_boardSet(char* charIn) __asm ("chess_boardSet");
char chess_winner() __asm ("chess_winner");
bool chess_isValid(int intX, int intY) __asm ("chess_isValid");
bool chess_isEnemy(char charPiece) __asm ("chess_isEnemy");
bool chess_isOwn(char charPiece) __asm ("chess_isOwn");
bool chess_isNothing(char charPiece) __asm ("chess_isNothing");
int chess_eval() __asm ("chess_eval");
int chess_moves(char* charOut) __asm ("chess_moves");
int chess_movesShuffled(char* charOut) __asm ("chess_movesShuffled");
int chess_movesEvaluated(char* charOut) __asm ("chess_movesEvaluated");
void chess_move(char* charIn) __asm ("chess_move");
void chess_moveRandom(char* charOut) __asm ("chess_moveRandom");
void chess_moveGreedy(char* charOut) __asm ("chess_moveGreedy");
void chess_moveNegamax(char* charOut, int intDepth, int intDuration) __asm ("chess_moveNegamax");
void chess_moveAlphabeta(char* charOut, int intDepth, int intDuration) __asm ("chess_moveAlphabeta");
void chess_undo() __asm ("chess_undo");

#endif
