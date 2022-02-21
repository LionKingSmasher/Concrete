#include <inttypes.h>
#include <sys/socket.h>

#ifndef __NETINET_IN_H__
#define __NETINET_IN_H__

typedef uint16_t in_port_t;
typedef uint32_t in_addr_t;

struct in_addr {
	in_addr_t a_addr;
};

struct sockaddr_in {
	sa_family_t    sin_family;  // Protocol family
	in_port_t      sin_port;    // Port number
	struct in_addr sin_addr; // IP address
};

struct in6_addr {
	uint8_t s6_addr[16];
};

struct sockaddr_in6 {
	sa_family_t     sin6_family;   // Protocol family
	in_port_t       sin6_port;     // Port number
	uint32_t        sin6_flowinfo; // IPv6 traffic class and flow information
	struct in6_addr sin6_addr;     // IPv6 address
	uint32_t        sin6_scope_id; // Set of interfaces for a scope
};

struct ipv6_mreq {
	struct in6_addr ipv6mr_multiaddr; // IPv6 multicast address
	unsigned int    ipv6mr_interface; // Interface index
};

#endif