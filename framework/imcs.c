#include "main.h"

// TOOD: ENFORCE MUTUAL EXCLUSION
// TODO: IN THE TOURNAMENT, THE RESET FUNCTION MIGHT BE CALLED MULTIPLE TIMES

pthread_mutex_t imcs_objRunning = PTHREAD_MUTEX_INITIALIZER;

struct mg_mgr* imcs_objMongoose = NULL;
struct mg_connection* imcs_objConnection = NULL;
char* imcs_charServer = "tcp://svcs.cs.pdx.edu:3589";

bool imcs_boolConnected = false;
bool imcs_boolAuthorized = false;

char imcs_charBuffer[1024] = { };
char imcs_charOperation[16] = { };
char imcs_charTermination[16] = { };

void imcs_handler(struct mg_connection* objConnection, int intEvent, void* voidData) {
    if (intEvent == MG_EV_CONNECT) {
        printf("imcs: connected\n");
        
        imcs_boolConnected = true;
        imcs_boolAuthorized = false;
        
        webserver_broadcast("imcs_status", NULL);
        
    } else if (intEvent == MG_EV_CLOSE) {
        printf("imcs: disconnected\n");
        
        imcs_boolConnected = false;
        imcs_boolAuthorized = false;
        
        webserver_broadcast("imcs_status", NULL);
        
        imcs_objConnection = mg_connect(imcs_objMongoose, imcs_charServer, imcs_handler);
        
    } else if (intEvent == MG_EV_RECV) {
        objConnection->recv_mbuf.buf[objConnection->recv_mbuf.len] = '\0';
        
        if (strstr(objConnection->recv_mbuf.buf, "201 hello") != NULL) {
            imcs_boolAuthorized = true;
            
            webserver_broadcast("imcs_status", NULL);
            
        } else if (strstr(objConnection->recv_mbuf.buf, "202 hello new user") != NULL) {
            imcs_boolAuthorized = true;
            
            webserver_broadcast("imcs_status", NULL);
            
        }
        
        webserver_broadcast("imcs_buffer", objConnection->recv_mbuf.buf);
        
        strncat(imcs_charBuffer, objConnection->recv_mbuf.buf, objConnection->recv_mbuf.len);
        
        {
            int intSplit = 0;
            char charSplit[256][1024] = { };
            
            intSplit += 1;
            strcpy(charSplit[0], imcs_charBuffer);
            
            for (int intLine = 1; strstr(charSplit[intLine - 1], "\r\n") != NULL; intLine += 1) {
                intSplit += 1;
                strcpy(charSplit[intLine], strstr(charSplit[intLine - 1], "\r\n") + strlen("\r\n"));
                
                strstr(charSplit[intLine - 1], "\r\n")[0] = '\0';
            }
            
            for (int intLine = 0; intLine < intSplit; intLine += 1) {
                if (strncmp(charSplit[intLine], "105", strlen("105")) == 0) {
                    chess_reset();
                    
                } else if (strncmp(charSplit[intLine], "106", strlen("106")) == 0) {
                    chess_reset();
                    
                } else if (strncmp(charSplit[intLine], "230", strlen("230")) == 0) {
                    webserver_broadcast("imcs_operation", "competition");
                    
                    imcs_charBuffer[0] = '\0';
                    
                } else if (strncmp(charSplit[intLine], "231", strlen("231")) == 0) {
                    webserver_broadcast("imcs_operation", "competition");
                    
                    imcs_charBuffer[0] = '\0';
                    
                } else if (strncmp(charSplit[intLine], "232", strlen("232")) == 0) {
                    webserver_broadcast("imcs_operation", "competition");
                    
                    imcs_charBuffer[0] = '\0';
                    
                } else if (strncmp(charSplit[intLine], "408", strlen("408")) == 0) {
                    webserver_broadcast("imcs_operation", "competition");
                    
                    imcs_charBuffer[0] = '\0';
                    
                } else if (strncmp(charSplit[intLine], "?", strlen("?")) == 0) {
                    char charMove[1024] = { };
                    
                    {
                        char charBuffer[1024] = { };
                        
                        strcpy(charBuffer, charSplit[intLine - 1]);
                        
                        chess_boardSet(charBuffer);
                        
                        webserver_broadcast("imcs_board", charBuffer);
                    }
                    
                    {
                        int intTime = 0;
                        
                        intTime += (charSplit[intLine][2] - '0') * 600000;
                        intTime += (charSplit[intLine][3] - '0') * 60000;
                        intTime += (charSplit[intLine][5] - '0') * 10000;
                        intTime += (charSplit[intLine][6] - '0') * 1000;
                        intTime += (charSplit[intLine][8] - '0') * 100;
                        intTime += (charSplit[intLine][9] - '0') * 10;
                        intTime += (charSplit[intLine][10] - '0') * 1;
                        
                        chess_moveAlphabeta(charMove, -1, intTime);
                    }
                    
                    {
                        char charBuffer[1024] = { };
                        
                        sprintf(charBuffer, ">>> move %.5s\n", charMove);
                        
                        webserver_broadcast("imcs_buffer", charBuffer);
                    }
                    
                    {
                        mg_printf(imcs_objConnection, "%.5s\r\n", charMove);
                    }
                    
                    {
                        char charBuffer[1024] = { };
                        
                        chess_boardGet(charBuffer);
                        
                        webserver_broadcast("imcs_board", charBuffer);
                    }
                    
                    {
                        imcs_charBuffer[0] = '\0';
                    }
                    
                }
            }
        }
        
        if (imcs_charTermination[0] != '\0') {
            if (strstr(imcs_charBuffer, imcs_charTermination) != NULL) {
                webserver_broadcast("imcs_operation", imcs_charOperation);
                
                imcs_charBuffer[0] = '\0';
                imcs_charOperation[0] = '\0';
                imcs_charTermination[0] = '\0';
            }
        }
        
        mbuf_remove(&objConnection->recv_mbuf, objConnection->recv_mbuf.len);
        
    }
}

void imcs_thread() {
    mg_mgr_init(imcs_objMongoose, NULL);
    
    imcs_objConnection = mg_connect(imcs_objMongoose, imcs_charServer, imcs_handler);

    do {
        mg_mgr_poll(imcs_objMongoose, 1000);
    } while (pthread_mutex_trylock(&imcs_objRunning) != 0);
    
    pthread_mutex_unlock(&imcs_objRunning);
    
    mg_mgr_free(imcs_objMongoose);
}

void imcs_start() {
    pthread_mutex_init(&imcs_objRunning, NULL);
    pthread_mutex_lock(&imcs_objRunning);

    imcs_objMongoose = (struct mg_mgr*) (malloc(sizeof(struct mg_mgr)));
    imcs_objConnection = NULL;

    imcs_boolConnected = false;
    imcs_boolAuthorized = false;
    
    imcs_charBuffer[0] = '\0';
    imcs_charOperation[0] = '\0';
    imcs_charTermination[0] = '\0';
    
    pthread_t objThread = 0; pthread_create(&objThread, NULL, (void*) (imcs_thread), NULL);
}

void imcs_stop() {
    pthread_mutex_unlock(&imcs_objRunning);
    pthread_mutex_destroy(&imcs_objRunning);
}

bool imcs_connected() {
    return imcs_boolConnected;
}

bool imcs_authorized() {
    return imcs_boolAuthorized;
}

void imcs_register(char* charUser, char* charPass) {
    assert(imcs_connected() == true);
    
    {
        char charBuffer[1024] = { };
        
        sprintf(charBuffer, ">>> register %s\n", charUser);
        
        webserver_broadcast("imcs_buffer", charBuffer);
    }
    
    {
        imcs_charBuffer[0] = '\0';
        sprintf(imcs_charOperation, "imcs_register");
        sprintf(imcs_charTermination, "\r\n");
        
        mg_printf(imcs_objConnection, "register %s %s\n", charUser, charPass);
    }
}

void imcs_login(char* charUser, char* charPass) {
    assert(imcs_connected() == true);
    
    {
        char charBuffer[1024] = { };
        
        sprintf(charBuffer, ">>> me %s\n", charUser);
        
        webserver_broadcast("imcs_buffer", charBuffer);
    }
    
    {
        imcs_charBuffer[0] = '\0';
        sprintf(imcs_charOperation, "imcs_login");
        sprintf(imcs_charTermination, "\r\n");
        
        mg_printf(imcs_objConnection, "me %s %s\n", charUser, charPass);
    }
}

void imcs_list() {
    assert(imcs_connected() == true);
    
    {
        webserver_broadcast("imcs_buffer", ">>> list\n");
    }
    
    {
        imcs_charBuffer[0] = '\0';
        sprintf(imcs_charOperation, "imcs_list");
        sprintf(imcs_charTermination, ".\r\n");
        
        mg_printf(imcs_objConnection, "list\n");
    }
}

void imcs_offer() {
    assert(imcs_connected() == true);
    
    {
        webserver_broadcast("imcs_buffer", ">>> offer\n");
    }
    
    {
        imcs_charBuffer[0] = '\0';
        sprintf(imcs_charOperation, "imcs_offer");
        imcs_charTermination[0] = '\0';
        
        mg_printf(imcs_objConnection, "offer W\n");
    }
}

void imcs_accept(int intIdent) {
    assert(imcs_connected() == true);
    
    {
        char charBuffer[1024] = { };
        
        sprintf(charBuffer, ">>> accept %d\n", intIdent);
        
        webserver_broadcast("imcs_buffer", charBuffer);
    }
    
    {
        imcs_charBuffer[0] = '\0';
        sprintf(imcs_charOperation, "imcs_accept");
        imcs_charTermination[0] = '\0';
        
        mg_printf(imcs_objConnection, "accept %d B\n", intIdent);
    }
}

void imcs_ratings() {
    assert(imcs_connected() == true);
    
    {
        webserver_broadcast("imcs_buffer", ">>> ratings\n");
    }
    
    {
        imcs_charBuffer[0] = '\0';
        sprintf(imcs_charOperation, "imcs_ratings");
        sprintf(imcs_charTermination, ".\r\n");
        
        mg_printf(imcs_objConnection, "ratings\n");
    }
}
