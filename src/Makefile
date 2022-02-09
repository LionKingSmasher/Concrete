source-file :=

source-file += \
	$(CURDIR)/fcntl.c    \
	$(CURDIR)/unistd.c

source-dir :=

source-dir += concrete

%.o : %.c
	$(CC) -c -o -nostdinc $^ $@ $(CFLAGS)

all: $(source-file)
	$(foreach dir, $(source-dir), make -C $(dir))