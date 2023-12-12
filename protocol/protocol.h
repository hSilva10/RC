#ifndef _PROTOCOL_H_
#define _PROTOCOL_H_

#define MAX_NAME_D 6
#define MAX_FILENAME 24
#define MAX_START_VALUE 6
#define MAX_AUCTION_DURATION 5

char *handle_myauctions(char *buffer);

char *handle_mybids(char *buffer);

char *handle_list(char *buffer);

char *handle_show_record(char *buffer);


int send_udp_request(char *request);

int send_tcp_request(char *request, int isFile);

void analyse_udp_response(char *response, int *loggedIn);

void analyse_tcp_response(char *response);

#endif