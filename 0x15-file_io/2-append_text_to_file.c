#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file to append.
 * @text_content: NULL terminated string to add at the end of the file.
 * Return: 1 on success else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int dialog, file_write, length;

	if (!filename)
	{
		return (-1);
	}

	dialog = open(filename, O_WRONLY | O_APPEND);

	if (dialog < 0)
	{
		return (-1);
	}

	if (text_content)
	{
		length = 0;
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
