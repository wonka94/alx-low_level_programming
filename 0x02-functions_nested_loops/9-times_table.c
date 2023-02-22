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
			if (result > 9)
			{
				putchar ((result / 10) + '0');
				putchar ((result % 10) + '0');
			}
			else
			{
				putchar((result%10) + '0');
			}
			if (j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
