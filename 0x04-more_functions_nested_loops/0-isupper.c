#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if the code is uppercase
 * @c: character to be checked
 *
 * Return: Return 1 if 'c' is uppercase otherwise always 0 (Success)
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
