#include <stdio.h>

/**
* main - Entry point
* print combinations
* Return: 0
*/

int main()
{
	int i, j , k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);

				if (i != 8 && j != 9 && k != 10)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	return (0);
}