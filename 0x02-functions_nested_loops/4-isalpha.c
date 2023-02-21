#include "main.h"

/**
 * _isalpha: check alphabetic character
 * @c: value to check
 * Return: 1 if alphabet else 0
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
