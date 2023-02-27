#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
