#include <stdio.h>
#include <stdbool.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - add numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 if error else return 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	bool nan = false;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (_atoi(argv[i]) == 0)
			{
				nan = true;
			}
			else
			{
				j += _atoi(argv[i]);
			}

		}

		if (nan == false)
		{
			printf("%d\n", j);

			return (0);
		}
		else
		{
			printf("Error\n");

			return (1);
		}
	}
	else
	{
		printf("0\n");

	}
}
