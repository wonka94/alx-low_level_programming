#include "main.h"

/**
 * _isdigit - input
 * isdigit - checks if character is a digit
 * @c: charater to check
 * Return: 1 yes 0 no
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
