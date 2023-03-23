#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>
#include <ctype.h>

/**
 * print_name - Prints a name in uppercase
 *
 * @name: Name to print
 * @f: Function pointer to print the name
 *
 * 
 */

void print_name(char *name, void (*f)(char *));
#endif /* FUNCTION_POINTERS_H */

