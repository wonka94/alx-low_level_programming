#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: value
 * @index: The index to get the value at - indices start at 0.
 * Return: value of bit at index else -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
	{
		return (-1);
	}

	return (1 & (n >> index));
}
