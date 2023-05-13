#include <stdlib.h>
#include <stdio.h>

/**
 * append_text_to_file - ppends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: string to add to the end of the file
 *
 * Return: 1 on Success or -1 on Failure
 */

int append_string_to_file(const char *filename, const char *string)
{
    int fd, bytes_written, string_length = 0;

    if (filename == NULL || string == NULL) {
        return -1;
    }

    while (string[string_length] != '\0') {
        string_length++;
    }

    fd = open(filename, "a");
    if (fd == NULL) {
        return -1;
    }

    bytes_written = fwrite(string, sizeof(char), string_length, fd);
    if (bytes_written < string_length) {
        close(fd);
        return -1;
    }

    close(fd);
    return 0;
}
