#include "main.h"

/**
 *_puts_recursion - start of the program
 *@s: parameter one
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s+1);
}
