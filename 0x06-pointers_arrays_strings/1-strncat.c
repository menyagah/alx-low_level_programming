#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strncat - start of the function
 * @dest: parameter one
 * @src: parameter two
 * @n: parameter three
 *
 * Return: returns start
 */

char *_strncat(char *dest, char *src, int n)
{
	char *end_of_dest = dest;
	while (*end_of_dest != '\0')
	{
		end_of_dest++;
	}
	int i = 0;
	
	while (*src != '\0' && i < n)
	{
		*end_of_dest = *src;
		end_of_dest++;
		src++;
		i++;
	}
	*end_of_dest = '\0';
	return (dest);
}

