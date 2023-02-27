#include "main.h"
#include <string.h>

/**
 * puts_half - prints half the string
 * @str: parameter to be passed
 *
 */

void puts_half(char *str) 
{
	int length = strlen(str);
	int half = length / 2;
	int i;

	if(length % 2 == 1)
	{
		half = (length - 1) / 2;
	}
	for (i = half; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
