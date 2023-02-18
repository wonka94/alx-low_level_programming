#include <stdio.h>

/**
* main - Entry point
* print combinations
* Return: 0
*/

int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		putchar('0' + i);

		if (i != 8)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
