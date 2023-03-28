#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * Allocates a block of memory of the given size using malloc.
 * If the allocation fails, terminates the process with an exit status of 98.
 *
 * @param b the size of the memory block to allocate.
 * @return a pointer to the allocated memory block.
 */

void *malloc_checked(unsigned int b)
{
void *p = malloc(b);

if (p == NULL)
{
fprintf(stderr, "Memory allocation failed\n");
exit(98);
}
return (p);
}

