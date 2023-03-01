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
	int dest_len = strlen(dest);
	int i;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return dest;
}
