#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, j = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			j *= atoi(argv[i]);		
		}
	printf("%d\n", j);
	}
	else
	{
		printf("Error\n");
	}

	return (0);
}
