source-file :=
source-file += \
	time.c

CC = gcc
CFLAGS = -I../../include

all : $(source-file:.c=.o)

%.o : %.c
	$(CC) -g -c -nostdinc -nostdlib -fno-builtin $^ $(CFLAGS)

clear:
	rm *.o