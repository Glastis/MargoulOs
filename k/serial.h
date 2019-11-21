/*
** Created by Glastis on 21/11/19.
*/

#ifndef K_SERIAL_H
#define K_SERIAL_H

#include "k/types.h"

#define SERIAL_COM1             0x3F8
#define SERIAL_COM2             0x2F8
#define SERIAL_COM3             0x3E8
#define SERIAL_COM4             0x2E8

/* 0x0C = 9,600 BPS */
#define SERIAL_BITRATE          0x0c

void                            init_write();
int                             write(const char *buf, size_t count);

#endif /* !K_SERIAL_H */
