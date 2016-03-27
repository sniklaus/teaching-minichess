#ifndef ZEROMQ_H_LOCK
#define ZEROMQ_H_LOCK

void zeromq_start(char* charMode);
void zeromq_stop();
bool zeromq_connected();
char* zeromq_name();
void zeromq_send(cJSON* cjsonHandle);
cJSON* zeromq_recv();

#endif
