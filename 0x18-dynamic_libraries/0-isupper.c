#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if the code is uppercase
 * Return: Return 1 if 'c' is uppercase, otherwise always 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
