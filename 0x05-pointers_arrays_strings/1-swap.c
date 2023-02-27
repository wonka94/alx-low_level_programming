#include "main.h"

/**
 * swap_int - swap the valuses of two integers a and b
 *@a: Pointer to first value to swap
 *@b: Pointer to second value to swap
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
