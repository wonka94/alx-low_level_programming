#include "main.h"

/**
 * set_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: index of bit to clear
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
	{
		return (-1);
	}

	*n &= ~(1 << index);

	return (1);
}
