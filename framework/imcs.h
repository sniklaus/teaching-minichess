#ifndef IMCS_H_LOCK
#define IMCS_H_LOCK

void imcs_start();
void imcs_stop();
bool imcs_connected();
bool imcs_authorized();
void imcs_register(char* charUser, char* charPass);
void imcs_login(char* charUser, char* charPass);
void imcs_list();
void imcs_offer();
void imcs_accept(int intIdent);
void imcs_ratings();

#endif
