#include "main.h"
#include <string.h>

/**
 * rev_string - function to print the string passed in in reverse
 * @s: the string argument
 *
 */

void rev_string(char *s)
{
	char temp;
	size_t len = strlen(s) - 1;
	size_t i;
	size_t k = len;
        
	if (len == 0)
	{
		return '\0';
	}
	for (i = 0; i < len; i++)
	{
		temp = s[k];
		s[k] = s[i];
		s[i] = temp;
		k--;
		if (k == (len /2))
		{
			break;
		}
	}	
}
