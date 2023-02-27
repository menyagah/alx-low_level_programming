#include "main.h"

/**
 * rev_string - function to print the string passed in in reverse
 * @s: the string argument
 *
 */

void rev_string(char *s)
{
	int len = 0;

	while (len > 0)
	{
		putchar(*s);
		s--;
		len--;
	}
}
