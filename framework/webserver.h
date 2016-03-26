#ifndef WEBSERVER_H_LOCK
#define WEBSERVER_H_LOCK

void webserver_start();
void webserver_stop();
void webserver_broadcast(char* charEvent, char* charData);

#endif
