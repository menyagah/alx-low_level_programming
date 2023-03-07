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
	int len1, len2;

	len1 = strlen(dest);
	len2 = strlen(src);

	for ( int i = 0; i <= len2; i++)
	{
		dest[len1 + 1] = src[i];
	}
	return (dest);
}
