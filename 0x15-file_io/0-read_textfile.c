#include "main.h"

/**
 * read_textfile - reads a text file and prints the contents
 * @filename: name of file to be read and printed.
 * @letters: number of letters to be printed.
 * Return: actual number of letters printed else return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t next_read, next_write;
	char *buffer;

	if (!filename)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	next_read = read(fd, buffer, letters);
	next_write = write(STDOUT_FILENO, buffer, nrd);

	close(file);

	free(buffer);

	return (next_write);
}
