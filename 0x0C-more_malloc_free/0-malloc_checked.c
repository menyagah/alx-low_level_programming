#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates a block of memory of the given size using malloc.
 * @b: the size of the memory block to allocate.
 * @return: a pointer to the allocated memory block.
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

