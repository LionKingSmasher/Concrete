#ifndef __PWD_H__
#define __PWD_H__

#include <sys/types.h>

struct passwd {
    char* pw_name;  // login name
    uid_t pw_uid;   // user ID
    gid_t pw_gid;   // group ID
    char* pw_dir;   // working directory
    char* pw_shell; // shell
}

void endwent(void);
struct passwd* getpwent(void);
struct passwd* getpwnam(const char*);
int getpwnam_r(const char*, struct passwd*, char*, size_t, struct passwd**);
struct passwd* getpwuid(uid_t);
int getpwuid_r(uid_t, struct passwd*, char*, size_t, struct passwd**);
void setpwent(void);

#endif