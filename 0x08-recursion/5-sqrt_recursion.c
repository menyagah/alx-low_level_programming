#include "main.h"
#include <stdio.h>

/**
 * _sqrt_helper - helper function for _sqrt_recursion
 * @n: the number to find the square root of
 * @i: our current guess for the square root
 *
 * Return: the natural square root of n, or -1 if n does not have a
 *         natural square root
 */

int _sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - calculates the natural square root of a number
 *                    using recursion
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a
 *         natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}


/**
 * _sqrt_helper - helper function for _sqrt_recursion
 * @n: the number to find the square root of
 * @i: our current guess for the square root
 *
 * Return: the natural square root of n, or -1 if n does not have a
 *         natural square root
 */

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
