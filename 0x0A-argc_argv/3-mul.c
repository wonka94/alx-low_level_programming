#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 if error else return 0
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

	return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
