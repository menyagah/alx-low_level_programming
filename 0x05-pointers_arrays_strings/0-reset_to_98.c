#include "main.h"

/**
 * main - start of the function
 *@n: the parameter to be passed
 *
 * Return: returns 0
 */

void reset_to_98(int *n)
{
        int p;
	p = &n;
	p = 98;
	printf("value of 'n': %d\n", p);
	return (0);
}
