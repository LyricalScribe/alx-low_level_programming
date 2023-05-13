#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to the name of the file to create
 * @text_content: pointer to a string to write to the file
 *
 * Return: 1 on Success or  - 1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor, num_written, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	num_written = write(file_descriptor, text_content, len);

	if (file_descriptor == -1 || num_written == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
