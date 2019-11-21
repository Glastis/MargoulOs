#!/bin/bash
make clean && make && qemu-system-i386 -cdrom k.iso -enable-kvm -serial stdio
#make clean && make
#if [ $? == 0 ]; then
#    qemu-system-i386 -cdrom k.iso -enable-kvm -serial stdio &
#    gdb k/k
#fi
