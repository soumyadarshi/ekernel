SRC_FILES	+= hello.c

SOURCES 	:= $(addprefix src/, $(SRC_FILES))

obj-m 		:= hello.o
hello-objs 	:= $(addsuffix .o, $(basename $(SOURCES)))


all:
	make -C /lib/modules/$(shell uname -r)/build SUBDIRS=`pwd` modules
clean:
	make -C /lib/modules/$(shell uname -r)/build SUBDIRS=`pwd` clean
