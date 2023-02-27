#include "main.h"

/**
 * print_rev - function to print the string passed in in reverse
 * @s: the string argument
 *
 */

void print_rev(char *s)
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
	printf("\n");
}
