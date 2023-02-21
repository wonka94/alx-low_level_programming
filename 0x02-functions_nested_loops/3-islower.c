#include "main.h"

/**
 * _islower - check if alphabet is lowercase
 * @c - parameter to check
 * Return: 1 if c is lowercase else 0
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
