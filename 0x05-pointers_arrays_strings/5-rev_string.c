#include "main.h"

/**
 * rev_string - function to print the string passed in in reverse
 * @s: the string argument
 *
 */

void rev_string(char *s)
{
        int len = 0;

        while (*s != '\0')
        {
                len++;
                s++;
        }
        s--;
        while (len > 0)
        {
		printf("%c", *s);
                s--;
		len--;
        }
} 
