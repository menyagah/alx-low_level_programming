#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - a function that returns the value of x raised to power of y
 * @x: parameter one
 * @y: the value to be raised
 *
 * Return: returns the value of x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
