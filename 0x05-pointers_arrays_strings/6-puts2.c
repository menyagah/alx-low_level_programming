#include "main.h"
#include <string.h>

/**
 * puts2 - prints the even value
 * @str - the parameter being passed in as a string
 *
 */

void puts2(char *str)
{
	for (int i = 0; i < strlen(str); i+=2) 
	{
		printf("%c\n", str[i]);
	}
}
