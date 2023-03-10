#include <stdio.h>
#include "main.h"

/**
 * main - entry point of programme
 * @argc: count of arguments
 * @argv: arguments
 * 
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
