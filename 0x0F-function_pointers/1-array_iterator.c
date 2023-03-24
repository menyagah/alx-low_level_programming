#include <stdio.h>

/**
 * array_iterator - applies a function to each element of an array
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the function to apply
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
for (size_t i = 0; i < size; i++)
{
(*action)(array[i]);
}
}

