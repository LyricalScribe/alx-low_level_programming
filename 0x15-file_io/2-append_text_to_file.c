#include "main.h"
#include <string.h>

/**
 * append_text_to_file - ppends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: string to add to the end of the file
 *
 * Return: 1 on Success or -1 on Failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
    int fd, bytes_written;
    size_t len;

    if (filename == NULL)
        return (-1);

    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (-1);

    if (text_content == NULL)
    {
        close(fd);
        return (1);
    }

    len = strlen(text_content);
    bytes_written = write(fd, text_content, len);
    close(fd);

    if (bytes_written != (int)len)
        return (-1);

    return (1);
}




