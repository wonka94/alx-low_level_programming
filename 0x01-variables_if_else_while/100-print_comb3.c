#include <stdio.h>

/**
* main - Entry point
* print combinations
* Return: 0
*/

int main(void)
{
	int i, j;

	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
