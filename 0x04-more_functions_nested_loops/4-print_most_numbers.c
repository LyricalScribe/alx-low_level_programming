#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
			_putchar((num % 10) + '0');
	}

	_putchar('\n');
}
