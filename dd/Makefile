
obj-m := dd_sam.o

KERNEL_SOURCE := /usr/src/linux-headers-4.14.0-deepin2-amd64/
PWD := $(shell pwd)

default:
	make -C ${KERNEL_SOURCE} SUBDIRS=${PWD} modules

clean:
	make -C ${KERNEL_SOURCE} SUBDIRS=${PWD} clean
