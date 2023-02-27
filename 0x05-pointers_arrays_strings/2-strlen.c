#include "main.h"

/**
 * _strlen - counts the length of the passed argument string
 * @s: the passed string argument
 *
 * Return: returns len
 */

int _strlen(char *s)
{
	int len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
