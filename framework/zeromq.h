#ifndef ZEROMQ_H_LOCK
#define ZEROMQ_H_LOCK

void zeromq_start();
void zeromq_stop();
bool zeromq_connected();
char* zeromq_name();
void zeromq_send(cJSON* objectJson);
cJSON* zeromq_recv();

#endif
