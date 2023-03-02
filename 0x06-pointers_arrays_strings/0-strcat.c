#include "main.h"
#include <string.h>

/**
 * _strcat - a function that concatnates strings
 * @dest: string 1 passed as a parameter
 * @src: string 2
 *
 * Return: returns concatnated string
 */

char* _strcat(char* dest, char* src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return start;
}
