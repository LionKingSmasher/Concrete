source-file :=

source-file += \
	fcntl.c    \
	unistd.c   \
	string.c   \
	time.c     \


source-dir :=

source-dir += \
	concrete  \
	sysdeps   \
	sys

CFLAGS :=

CFLAGS += -I../include

CC=gcc

all: $(source-file:.c=.o)
	for i in $(source-dir) ; do \
		make -C $$i;            \
	done
# 	$(foreach dir, $(source-dir), make -C $(dir))

%.o : %.c
	$(CC) -g -c -nostdinc -nostdlib -fno-builtin $^ $(CFLAGS)

clear:
	for i in $(source-dir) ; do \
		make -C $$i clear;      \
	done
	rm *.o