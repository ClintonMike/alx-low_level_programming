#include "main.h"

/**
 * print_binary - Prints a binary notation of a number.
 * @n: number to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask = 0;

	/* Calculate the number of bits in unsigned long int */
	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		mask = 1UL << i; /* Shift the 1 to the i-th position */
		if (n & mask) /* Check if the i-th bit is set */
			_putchar('1');
		else
			_putchar('0');
	}
}
