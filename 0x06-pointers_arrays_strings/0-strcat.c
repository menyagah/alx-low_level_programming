#include "main.h"
#include <string.h>

/**
 * _strcat - a function that concatnates strings
 * @dest: string 1 passed as a parameter
 * @src: string 2
 *
 * Return: returns concatnated string
 */

char *_strcat(char *dest, char *src)
{
	char *end_of_dest = dest;
	
	while (*end_of_dest != '\0')
	{
		end_of_dest++;
	}
	while (*src != '\0')
	{
		*end_of_dest = *src;
		end_of_dest++;
		src++;
	}

	*end_of_dest = '\0';
	return (dest);
}
