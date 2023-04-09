#include "main.h"

/**
 * flip_bits - gets the number of bits needed to be
 * flipped to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int number = 0;

	while (i > 0)
	{
		number += i & 1;
		i >>= 1;
	}

	return (number);
}
