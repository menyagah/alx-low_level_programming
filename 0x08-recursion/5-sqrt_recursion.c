#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function that returns natural square root of a number
 * @n: parameter one
 *
 * Return: returns the natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1) 
	{
		return n;
	}
	int low = 1, high = n, mid;
	while (low <= high)
	{
		mid = (low + high) / 2;

		if (mid * mid == n)
		{
			return mid;
		}
		else if (mid * mid < n)
		{
			low = mid + 1;
		}
		else
		{
			high = mid -1;
		}
	}
	return -1;
}
