#include <stdlib.h> /* for malloc, free */
#include <string.h> /* for memcpy */

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the memory block
 *
 * Return: pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;

/* If new size is zero, free the old pointer and return NULL */
if (new_size == 0)
{
free(ptr);
return (NULL);
}

/* If ptr is NULL, allocate new memory block */
if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
return (new_ptr);
}

/* If new size is same as old size, do nothing and return ptr */
if (new_size == old_size)
return (ptr);

/* Allocate new memory block */
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}

/* Copy contents of old memory block to new memory block */
memcpy(new_ptr, ptr, (old_size < new_size) ? old_size : new_size);

/* Free old memory block */
free(ptr);

return (new_ptr);
}

