#include "main.h"
#include <string.h>

/**
 * rev_string - function to print the string passed in in reverse
 * @s: the string argument
 *
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int i;
	char *begin, *end, temp;
	begin = s;
	end = s;
	for (i = 0; i < length - 1; i++)
	{
		end++;
	}
	for (i = 0; i < length/2; i++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
	}
}
