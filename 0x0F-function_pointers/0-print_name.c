#include <stdio.h>

/**
 * print_name - Prints a name
 *
 * @name: Name to print
 * @f: Function pointer to print the name
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
printf("Name: \n");
(*f)(name);
}
}

