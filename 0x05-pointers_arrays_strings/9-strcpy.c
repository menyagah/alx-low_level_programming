#include "main.h"

/**
 * _strcpy - start of the program
 * @dest: parameter
 * @src: parameter
 *
 * Return: returns destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
