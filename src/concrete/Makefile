source-file :=
source-file += \
	syscall.c

CFLAGS := -I../../include

CC=gcc

all: $(source-file:.c=.o)

%.o : %.c
	$(CC) -c -nostdinc $^ $(CFLAGS)

# all: $(source-file:.c = .o)	