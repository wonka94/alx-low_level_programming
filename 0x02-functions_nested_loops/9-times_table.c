#include "main.h"

/**
 * times_table - print 9 times table
 * Return: 0
 */

void times_table(void)
{
	int i, result;

	for (i = 0; i <= 9; i++)
	{
	result = 9 * i;
	_putchar('0' + result);
	}
}
