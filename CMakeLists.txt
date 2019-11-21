cmake_minimum_required(VERSION 3.13)
project(k C)

set(CMAKE_C_STANDARD 11)

include_directories(k)
include_directories(k/include)
include_directories(k/include/k)
include_directories(libs/libc/include)
include_directories(libs/libk)
include_directories(libs/libk/include)
include_directories(roms/skate)

add_executable(k
        k/include/k/atapi.h
        k/include/k/blockdev.h
        k/include/k/compiler.h
        k/include/k/iso9660.h
        k/include/k/kfs.h
        k/include/k/kstd.h
        k/include/k/types.h
        k/elf.h
        k/io.h
        k/k.c
        k/libvga.c
        k/libvga.h
        k/list.c
        k/list.h
        k/memory.c
        k/memory.h
        k/multiboot.h
        libs/libc/include/assert.h
        libs/libc/include/ctype.h
        libs/libc/include/limits.h
        libs/libc/include/stdio.h
        libs/libc/include/string.h
        libs/libc/memchr.c
        libs/libc/memcmp.c
        libs/libc/memcpy.c
        libs/libc/memmove.c
        libs/libc/memset.c
        libs/libc/printf.c
        libs/libc/puts.c
        libs/libc/strcasecmp.c
        libs/libc/strcat.c
        libs/libc/strcmp.c
        libs/libc/strcpy.c
        libs/libc/strlen.c
        libs/libc/strncasecmp.c
        libs/libc/strncmp.c
        libs/libc/strncpy.c
        libs/libc/strnlen.c
        libs/libk/include/graphic.h
        libs/libk/include/kstd.h
        libs/libk/include/sound.h
        libs/libk/include/stdlib.h
        libs/libk/graphic.c
        libs/libk/malloc-k.h
        libs/libk/malloc.c
        libs/libk/sound.c
        libs/libk/strdup.c
        libs/libk/syscalls.c
        roms/chichehunter/hunter.c
        roms/chichepong/pong.c
        roms/chichevaders/vaders.c
        roms/perrodlauncher/perrod.c
        roms/skate/gfx.c
        roms/skate/park.c
        roms/skate/skate.c
        roms/skate/skate.h
        roms/skate/skater.c
        roms/yakanoid/yakanoid.c
        tools/mkkfs/mkkfs.c
        tools/mkksf/mkksf.c k/serial.c k/serial.h)
