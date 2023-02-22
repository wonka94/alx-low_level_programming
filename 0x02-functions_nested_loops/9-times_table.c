#include "main.h"

/**
 * times_table - print 9 times table
 * Return: 0
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; i <= 9; i++)
		{
		result = i * j;
		_putchar('0' + result);
		}
	}
}
