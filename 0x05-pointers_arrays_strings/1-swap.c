#include "main.h"

/**
 * swap_int - a function that swaps two integer values
 * @a - integer value passed in
 * @b - second integer value passed in to be swapped with a
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
