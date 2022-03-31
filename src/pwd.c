#include <pwd.h>

void endwent(void){

}

struct passwd* getpwent(void){

}

struct passwd* getpwnam(const char*){

}

int getpwnam_r(const char*, struct passwd*, char*, size_t, struct passwd**){

}

struct passwd* getpwuid(uid_t){

}

int getpwuid_r(uid_t, struct passwd*, char*, size_t, struct passwd**){

}

void setpwent(void){

}
