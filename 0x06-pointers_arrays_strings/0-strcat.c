#include "main.h"
char *_strcat(char *dest, char *src)
{
	int aray = 0, d_count = 0;

	while (dest[aray++])
	{
		d_count++;
	}

	for (aray = 0; src[aray]; aray++)
	{
		dest[d_count++] = src[aray];
	}

	return (dest);
}
