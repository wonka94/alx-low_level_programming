#include "main.h"

/**
 * print_alphabet - print alphabet lowercase 10 times
 *
 * Return: 0.
 */

void print_alphabet(void)
{
	char alphabet;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
	_putchar('\n');
	}
}
