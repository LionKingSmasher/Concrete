source-file :=

source-file +=        \
	start.s           \
	__Concrete_main.c \

CC=gcc

CFLAGS += -I../../../include

all: $(source-file:.s=.o) $(source-file:.c=.o)

%.o: %.s
	$(CC) -g -c -nostdinc -nostdlib -fno-builtin $^ $(CFLAGS)

%.o: %.c
	$(CC) -g -c -nostdinc -nostdlib -fno-builtin $^ $(CFLAGS)

clear:
	rm *.o