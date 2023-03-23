#include "function_pointers.h"

/**
 * print_name - Prints a name
 *
 * @name: Name to print
 * @f: Function pointer to print the name
 *
 */

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
printf("Name: ");
(*f)(name);
}
}

