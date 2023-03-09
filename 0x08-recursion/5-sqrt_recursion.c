#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function that returns natural square root of a number
 * @n: parameter one
 *
 * _sqrt_helper - helper function
 *
 * _sqrt_helper - helper function
 * @n: first parameter
 * @i: second parameter
 *
 * Return: returns the natural square root
 */

int _sqrt_helper(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}

int _sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt_helper(n, i + 1));
}
