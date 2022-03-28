/*
 * src.c
 *
 *  Created on: Mar 28, 2022
 *      Author: Mieko
 */

#include <avr/io.h>
#include <util/delay.h>
#include <stdint.h>

int16_t main ()
{
DDRB |= 1 << 5; // PB5 je izlaz
while (1)
{
PORTB |= 1 << 5; // LED ON
_delay_ms (1000) ; // pauza 1 s
PORTB &= ~(1 << 5) ; // LED OFF
_delay_ms (1000) ; // pauza 1 s
}
return 0;
}
