#include "main.h"
#include <string.h>

/**
 * puts2 - prints the even value
 * @str - the parameter being passed in as a string
 *
 */

void puts2(char *str)
{
	int i;
	int length = strlen(str);

	for (i = 0; i < length; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
