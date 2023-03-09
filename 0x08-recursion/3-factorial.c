#include "main.h"
#include <stdio.h>


/**
 * factorial - function that gives the factorial of a number
 * @n: parameter one
 *
 * Return: returns the factorial
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
