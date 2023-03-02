#include "main.h"

/**
 * *_strncat - start of the function
 * @dest: parameter one
 * @src: parameter two
 * @n parameter three
 *
 * Return: returns start
 */

char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;

	while (*dest != '\0') 
	{
		dest++;
	}

	int i = 0;

	while(*src != '\0' && i < n)
	{
		*dest++ = *src++;
		i++;
	}

	*dest = '\0';
	return (start);
}
