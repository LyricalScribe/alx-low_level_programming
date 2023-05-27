#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string
 * @s: string to search from
 * @c: character to search for
 * Return: pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
        {
            return s;
        }
        s++;
    }

    return NULL;
}
