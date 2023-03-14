#include "main.h" 

/**
 * create_array - Creates an array of chars and initializes it with a specific char.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Return: On success, returns a pointer to the array. On failure, returns NULL.
 */

char *create_array(unsigned int size, char c)
{
    char *arr;

    if (size == 0)
  {
      return (NULL);
  }
    arr = malloc(size * sizeof(char));
    if (arr == NULL)
  {
    return (NULL);
  }
    for (unsigned int i = 0; i < size; i++)
  {
    arr[i] = c;
  }

    return (arr);
}

