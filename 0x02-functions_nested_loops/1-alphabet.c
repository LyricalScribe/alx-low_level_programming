#include "main.h"

/**
 * print_alphabet - entry point
 * Description: print lowercase alphabets
 * Return: ''
 */
void print_alphabet(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
		_putchar(d);
	_putchar('\n');
}
