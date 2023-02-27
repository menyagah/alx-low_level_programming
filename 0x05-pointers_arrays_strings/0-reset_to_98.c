#include "main.h"

/**
 * main - start of the function
 *@n: the parameter to be passed
 *
 * Return: returns 0
 */

void reset_to_98(int *n)
{
	int p = 98;
        int *n = &p;
	printf("value of 'n': %d\n", *n);
	return (0);
}
