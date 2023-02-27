#include "main.h"

/**
 * _strlen - get length of a string
 * @s: A pointer to string to get length
 * Return: length of the string
 */

int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
