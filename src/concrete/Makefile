source-file :=
source-file += \
	syscall.c  \
	syscall_asm.s


CFLAGS := -I../../include

CC=gcc

all : $(source-file:.c=.o) $(source-file:.s=.o)

%.o : %.c
	$(CC) -g -c -nostdinc -nostdlib -fno-builtin $^ $(CFLAGS)

%.o : %.s
	$(CC) -g -c -nostdinc -nostdlib -fno-builtin $^ $(CFLAGS)

clear:
	rm *.o
# all: $(source-file:.c = .o)	