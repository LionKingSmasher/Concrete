source-file :=

source-file += \
	$(CURDIR)/fcntl.c    \
	$(CURDIR)/unistd.c

source-dir :=

source-dir += concrete

CFLAGS :=

CFLAGS += -I../include

CC=gcc

all: $(source-file:.c=.o)
	$(foreach dir, $(source-dir), make -C $(dir))

%.o : %.c
	$(CC) -g -c -nostdinc $^ $(CFLAGS)

clear:
	$(foreach dir, $(source-dir), make -C $(dir) clear)
	rm *.o