####################################################
#                                                  #
#                                                  #
#              Makefile for Concrete               #
#                                                  #
#                                                  #
#    (C) 2022 Shin Hyun-Kyu all rights reserved.   #
#                                                  #
####################################################


source-dir = \
	src/ \

header-dir = include/

source-file =

CFLAGS = -I$(header-dir)

CC = gcc

all:
	$(foreach dir, $(source-dir), make -C $(dir))

install:
	ar crv libconcrete.a $(foreach obj-file, $(shell find . -name '*.o'), $(obj-file))

clear:
	$(foreach dir, $(source-dir), make -C $(dir) clear)
	rm libconcrete.a