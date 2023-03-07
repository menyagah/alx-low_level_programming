#include "main.h"
#include <string.h>

/**
 * _strcat - a function that concatnates strings
 * @dest: string 1 passed as a parameter
 * @src: string 2
 *
 * Return: returns concatnated string
 */

char *_strcat(char *dest, const char *src)
{
	char *p = dest;

	while (*p != '\0') 
	{
		p++;
	}
	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return dest;
}
