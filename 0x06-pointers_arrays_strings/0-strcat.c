#include "main.h"
#include <stdio.h>

/**
 * *_strcat - a function that concatnates strings
 * @dest: parameter one
 * @src: parameter two
 *
 * Return: returns dest
 */

/**char *_strcat(char *dest, char *src)
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
*/

char *_strcat(char *dest, char *src)
{
        int dest_len = strlen(dest);

        int i;

        for (i = 0; src[i] != '\0'; i++)
        {
                dest[dest_len + i] = src[i];
        }
        dest[dest_len + i] = '\0';
        return (dest);
}
