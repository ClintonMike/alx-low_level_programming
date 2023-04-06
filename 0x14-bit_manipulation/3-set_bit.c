#include "main.h"

/**
 * set_bit - Sets the value of a binary digit at a given index to 1.
 * @n: A pointer to the binary digit to set
 * @index: The index to set the value of bit
 *
 * Return: 1 if error, else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	set = 1 << index;
	*n = *n | set;

	return (1);
}
