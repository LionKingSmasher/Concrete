source-dir :=

source-dir += x86_64

all:
	for i in $(source-dir) ; do \
		make -C $$i;            \
	done

clear:
	for i in $(source-dir) ; do \
		make -C $$i clear;      \
	done
# 	$(foreach dir, $(source-dir), make -C $(dir))