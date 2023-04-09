#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename to file to be created
 * @text_content: string to write to the file
 * Return: 1 on success, else -1
 */

int create_file(const char *filename, char *text_content)
{
	int dialog, file_write, length = 0;

	if (!filename)
	{
		return (-1);
	}

	dialog = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	
	if (dialog == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[length])
		{
			length++;
		}

		file_write = write(dialog, text_content, length);

		if (file_write < 0)
		{
			return (-1);
		}
	}

	close(dialog);

	return (1);
}
