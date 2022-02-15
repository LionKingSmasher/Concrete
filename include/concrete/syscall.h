#ifndef __CONCRETE_SYSCALL_H__
#define __CONCRETE_SYSCALL_H__

typedef unsigned char      u8;
typedef unsigned short     u16;
typedef unsigned int       u32;
typedef unsigned long long u64;

// struct syscall_reg_t {
// 	u64 reg[6];
// 	// //arguments section
// 	// u32 rdi;  // rdi register
// 	// u32 rsi;  // rsi register
// 	// u32 rdx;  // rdx register
// 	// u32 rcx;  // rcx register
// 	// u32 r8;   // r8  register
// 	// u32 r9;   // r9  register

// 	// // retrun value section
// 	// u32 rax;  // rax register
// };

extern u64  system_call(u64, u64*);

u64 concrete_syscall(u16, ...);

#endif