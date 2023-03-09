#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - prints the length of a string
 * @s: first parameter to be passed in
 *
 * Return: returns the string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
