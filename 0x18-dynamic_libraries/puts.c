#include "main.h"

/**
 * _puts - writes the string s to stdout
 * @s: The string to print
 *
 * Return: string written
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);
}
