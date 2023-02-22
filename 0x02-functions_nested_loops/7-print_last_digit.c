#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @n: value to print last digit
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int last_digit = abs(n) % 10;

	_putchar(last_digit + '0');

	return (last_digit);
}
