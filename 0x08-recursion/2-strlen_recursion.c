#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: string being checked
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s == '\0')
		return (0);

	longit =  (1 + _strlen_recursion(s + 1));

	return (longit);
}
