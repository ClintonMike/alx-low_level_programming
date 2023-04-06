#include "main.h"

/**
 * 
 *
 * 
 *        
 */

int get_endianness(void)
{
	char *y;
	int x = 1;

	y = (char *)&x;

	return (*y);
}
