#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to the new concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, index = 0;
	int total_length = 0;
	char *dest;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		total_length++;

	dest = malloc(sizeof(char) * (total_length + 1));

	if (dest == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		dest[index++] = s1[i];

	for (i = 0; s2[i]; i++)
		dest[index++] = s2[i];

	dest[index] = '\0';

	return (dest);
}
