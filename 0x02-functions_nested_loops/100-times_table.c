#include "main.h"

/**
 * print_times_table -prints tables
 * @n: value
 * Return: 0
 */

void print_times_table(int n)
{
	int a;
	int b;
	int c;

	if (n > 15 || n < 0)
	{
		return;
	}
	else
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if ((c / 10) == 0)
				{
					if (b == 0)
					{
						_putchar ('0');
					}
					if (b != 0)
					{
						_putchar (' ');
						_putchar ((c % 10) + '0');
					}
					if (b < 9)
					{
						_putchar(',');
						_putchar (' ');
					}
				}
				else
				{
					_putchar ((c / 10) + '0');
					_putchar ((c % 10) + '0');
					if (b < 9)
					{
						_putchar(',');
						_putchar (' ');
					}
				}
			}
			_putchar ('\n');
		}
	}
}
