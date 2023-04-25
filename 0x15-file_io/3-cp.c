#include "main.h"

int close_file(int);

/**
 * main - Main function to copy files
 * @argc: The number of passed arguments
 * @argv: The pointer to array arguments
 * Return: 1 on success, exits on failure
 */

int main(int argc, char *argv[])
{
	char buf[1024];
	int read_bytes = 0, end_of_file = 1, source_fd = -1, dest_fd = -1, err = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	source_fd = open(argv[1], O_RDONLY);
	if (source_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	dest_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (dest_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_file(source_fd);
		exit(99);
	}

	while (end_of_file)
	{
		end_of_file = read(source_fd, buf, 1024);
		if (end_of_file < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close_file(source_fd);
			close_file(dest_fd);
			exit(98);
		}
		else if (end_of_file == 0)
		{
			break;
		}
		read_bytes += end_of_file;
		err = write(dest_fd, buf, end_of_file);
		if (err < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_file(source_fd);
			close_file(dest_fd);
			exit(99);
		}
	}
	err = close_file(dest_fd);
	if (err < 0)
	{
		close_file(source_fd);
		exit(100);
	}
	err = close_file(source_fd);
	if (err < 0)
	{
		exit(100);
	}
	return (0);
}

/**
 * close_file - A function that closes a file and prints error when closed file
 * @fd: Description error for closed file
 * Return: error code
 */

int close_file(int fd)
{
	int err;

	err = close(fd);
	if (err < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	}
	return (err);
}
