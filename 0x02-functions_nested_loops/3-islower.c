#include "main.h"

/**
 * _islower - entry point
 * @c - integer c
 * Description: 'nothing to see here'
 * Return: ''
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
