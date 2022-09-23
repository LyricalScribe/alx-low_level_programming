#include "main.h"

/**
 * print_sign - entry point
 * @n: An input number
 * Description: Tohis function prints the sign of the number
 * Return: ''
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}
