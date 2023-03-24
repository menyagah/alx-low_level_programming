#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
#include <stdio.h>
#include <ctype.h>

/**
 * print_name - Prints a name in uppercase
 *
 * @name: Name to print
 * @f: Function pointer to print the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *));

/**
 * print - Prints a character
 *
 * @c: Character to print
 *
 * Return: void
 */
void print(char *c);

/**
 * array_iterator - Executes a function on each element of an array
 *
 * @array: Array of integers
 * @size: Size of the array
 * @action: Pointer to a function that takes an integer and returns void
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* FUNCTION_POINTERS_H */


