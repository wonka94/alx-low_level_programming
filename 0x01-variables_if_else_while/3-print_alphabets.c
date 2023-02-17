#include <stdio.h>

/**
*main - Entry point
*print alphabets in both small and capital letters
*add new line
*Return: 0.
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	printf("\n");

	return (0);
}
