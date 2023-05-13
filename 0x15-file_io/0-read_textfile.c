#include "main.h"
#include <stdlib.h>

/**
 * read_and_print_file- Read text file print to STDOUT.
 * @filename: text file being read
 * @num_chars: number of characters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_and_print_file(const char *filename, size_t num_chars)
{
	char *buffer;
	ssize_t file_descriptor;
	ssize_t num_read;
	ssize_t num_written;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * num_chars);
	num_read = read(file_descriptor, buffer, num_chars);
	num_written = write(STDOUT_FILENO, buffer, num_read);

	free(buffer);
	close(file_descriptor);
}
