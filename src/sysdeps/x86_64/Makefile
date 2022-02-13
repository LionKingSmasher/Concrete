source-file :=

source-file += \
	$(CURDIR)/start.s

CC=gcc

CFLAGS += -I../../../include

all: $(source-file:.s=.o)

%.o: %.s
	$(CC) -g -c -nostdinc -nostdlib $^ $(CFLAGS)

clear:
	rm *.o