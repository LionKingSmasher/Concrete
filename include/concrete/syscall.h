#ifndef __CONCRETE_SYSCALL_H__
#define __CONCRETE_SYSCALL_H__

typedef unsigned char      u8;
typedef unsigned short     u16;
typedef unsigned int       u32;
typedef unsigned long long u64;

struct syscall_reg_t {
	// arguments section
	u64 rdi;  // rdi register
	u64 rsi;  // rsi register
	u64 rdx;  // rdx register
	u64 rcx;  // rcx register
	u64 r8;   // r8  register
	u64 r9;   // r9  register

	// retrun value section
	u64 rax;  // rax register
};

void concrete_syscall(u16, struct syscall_reg_t*);

#endif