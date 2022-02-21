#include <stdint.h>
#include <sys/uio.h>
#include <sys/types.h>

#include <concrete/macro.h>

#ifndef __SYS_SOCKET_H__
#define __SYS_SOCKET_H__

typedef uint_least32_t socklen_t;
typedef uint32_t       sa_family_t;

struct sockaddr {
	sa_family_t sa_family; // Address Family
	char        sa_data[14]; // Socket Address
};

struct sockaddr_storage {
	sa_family_t ss_family; // Address family
};

struct msghdr {
	void*         msg_name;       // Optional Address
	socklen_t     msg_namelen;    // Size of address
	struct iovec* msg_iov;        // Scatter/gather array
	int           msg_iovlen;     //
	void*         msg_control;    // Ancillary data
	socklen_t     msg_controllen; // Ancillary data buffer len
	int           msg_flags;      // Flags on received message
};

struct cmsghdr {
	socklen_t      cmsg_len;   // Data byte count
	int            cmsg_level; // Originating protocol;
	int       	   cmsg_type;  // Protocol-specific type
	unsigned char* cmsg_data;  // Cmsg data
};

struct linger {
	int l_onoff;  // Indicates whether linger option is enabled.
	int l_linger; // Linger time
};

#define CMSG_DATA(cmsg) (cmsg)->cmsg_data
#define CMSG_NXTHDR(mhdr, cmsg) __cmsg_nxthdr(mhdr, cmsg)

#define CMSG_ROUNDUP_SIZE(len) ((len + sizeof(size_t) - 1) & ~(sizeof(size_t) - 1))

__always_inline static struct cmsghdr* __cmsg_nxthdr(struct msghdr* msg, struct cmsghdr* cmsg){
	return cmsg = (struct cmsghdr*)((unsigned char*)(cmsg + CMSG_ROUNDUP_SIZE((cmsg)->cmsg_len)));
}

int accept(int, struct sockaddr*, socklen_t*);
int bind(int, const struct sockaddr*, socklen_t);
int connect(int, const struct sockaddr*, socklen_t);
int getpeername(int, struct sockaddr*, socklen_t*);
int getsockname(int, struct sockaddr*, socklen_t*);
int listen(int, int);
ssize_t recv(int, void*, size_t, int);
ssize_t send(int, const void*, size_t, int);
int socket(int, int, int);

#endif