#include "main.h"

/**
 * factorial - prints the factorial number
 * @n: number to fnd factorial for
 * Return: -1 indicates an error
 * /
int factorial(int n);
{
	if (n < 0)
		return (-1);
	elif (n == 0)
		return(1);

	return (n * factorial(n - 1));
}
