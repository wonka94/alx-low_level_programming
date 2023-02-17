#include <stdio.h>

/**
*main - Entry point
*print alphabet from a to z in small letters
*Return: 0.
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}
		putchar(ch);
	}

	printf("\n");

	return (0);
}
