#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: Pointer to string to be halved
 * Return: void which means our answer is correct
 */

void puts_half(char *str)

{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	j = (i + 1) / 2;

	for (i = last; str[i]; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
