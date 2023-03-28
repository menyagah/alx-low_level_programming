#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Entry point.
 * @b: the size of the memory block to allocate.
 * Return: a pointer.
 */

void *malloc_checked(unsigned int b)
{
void *p = malloc(b);

if (p == NULL)
{
exit(98);
}
return (p);
}

