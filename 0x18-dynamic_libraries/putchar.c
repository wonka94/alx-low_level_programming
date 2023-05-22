#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: the character written
 */
int _putchar(char c)
{
	return (fwrite(&c, 1, 1, stdout));
}
