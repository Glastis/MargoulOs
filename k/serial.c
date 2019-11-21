/*
** Created by Glastis on 21/11/19.
*/

#include "serial.h"
#include "io.h"

void                init_write()
{
    outb(0, SERIAL_COM1 + 1); /* Turn off interrupts - Port1 */
    outb(0x80, SERIAL_COM1 + 3); /* SET DLAB ON */
    outb(0x0C, SERIAL_COM1 + 0); /* Set Baud rate - Divisor Latch Low Byte */
    outb(0x00, SERIAL_COM1 + 1); /* Set Baud rate - Divisor Latch High Byte */
    outb(0x03, SERIAL_COM1 + 3); /* 8 Bits, No Parity, 1 Stop Bit */
    outb(0xC7, SERIAL_COM1 + 2); /* FIFO Control Register */
    outb(0x0B, SERIAL_COM1 + 4); /* Turn on DTR, RTS, and OUT2 */
    //outb(0x01, SERIAL_COM1 + 1); /* Interrupt when data received */
    //outb(0, SERIAL_COM1 + 1); /* Turn off interrupts - Port1 */
}

int                 write(const char *buf, size_t count)
{
    unsigned int    i;

    i = 0;
    while (i < count)
    {
        outb(SERIAL_COM1, buf[i]);
        ++i;
    }
}