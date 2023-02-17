#include <stdio.h>

/**
*main - Entry point
*print alphabet from a to z in small letters
*Return: 0.
*/

int main()
{
	char ch;
	printf("The Alphabets from a to z are: \n");
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	return 0;
}