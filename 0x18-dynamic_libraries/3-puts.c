#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: string parameter to print
 *
 * Return: a string
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
