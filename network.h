#ifndef NETWORK_H
#define NETWORK_H
struct string;
void init_string(struct string *s);
size_t writefunc(void *ptr, size_t size, size_t nmemb, struct string *s);
char* request(char* user_agent, char* url);
#endif
