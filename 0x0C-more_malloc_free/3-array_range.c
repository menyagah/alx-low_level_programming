#include "main.h"
#include <stdlib.h> /* for malloc */

/**
 * array_range - creates an array of integers containing all values from min
 *               to max, inclusive
 * @min: the minimum value in the array
 * @max: the maximum value in the array
 *
 * Return: pointer to the newly created array or NULL if an error occurred
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
		arr[i] = min + i;

	return (arr);
}

