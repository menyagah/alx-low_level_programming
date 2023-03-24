#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

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
//void array_iterator(int *array, size_t size, void (*action)(int));
#endif /* FUNCTION_POINTERS_H */

