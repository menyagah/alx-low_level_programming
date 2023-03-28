#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - entry of proram
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
  void *ptr;

  if (nmemb == 0 || size == 0)
  {
    return (NULL);
  }

  ptr = malloc(nmemb * size);

  if (ptr == NULL)
  {
    return (NULL);
  }

  memset(ptr, 0, nmemb * size);
  return (ptr);
}
