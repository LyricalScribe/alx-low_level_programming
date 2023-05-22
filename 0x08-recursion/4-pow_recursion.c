#include "main.h"

/**
 * _pow_recursion - Calculates the value of x raised to the power of y  * recursively
 * @x; the base number
 * @y: the exponent
 * Return: the result of x raised to y, 
 * or -1 if the exponent is negative
 */

int _pow_recursion(int x, int y)
{	
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
