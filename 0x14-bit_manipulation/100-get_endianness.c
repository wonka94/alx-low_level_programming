#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 if big-endian else 1.
 */

int get_endianness(void)
{
	int x = 1;
	char *c = (char *)&x;

	if (*c == 1)
	{
		return (1);
	}

	return (0);
}
