#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: A pointer to a string of 0 and 1 chars
 * Return: converted number else 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}

		num = 2 * num + (b[i] - '0');

		i++;
	}

	return (num);
}
