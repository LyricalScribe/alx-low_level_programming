#include "main.h"

/**
 * int _strlen_recursion - find length using recursion
 * @s: string to count
 * Return: length of the string
 */
int _strlen_recursion(char *s);
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
