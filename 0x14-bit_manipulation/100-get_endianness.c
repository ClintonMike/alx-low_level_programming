#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 If big-endian.
 *         1 If little-endian.
 */

int get_endianness(void)
{
	int x = 1;
	unsigned char *y = (unsigned char *)&x;

	return (*y == 0);
}
