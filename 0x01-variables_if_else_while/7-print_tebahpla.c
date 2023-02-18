#include <stdio.h>

/**
*main - Entry point
*print alphabet from a to z in small letters
*Return: 0.
*/

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
