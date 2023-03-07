#include "main.h"
#include <stdio.h>

/**
 * *_strcat - a function that concatnates strings
 * @dest: parameter one
 * @src: parameter two
 *
 * Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i;
	
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i]=src[i];
	}
	dest[dest_len + i]='\0';
	return (dest);
}

