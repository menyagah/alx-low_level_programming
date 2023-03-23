#include <stdio.h>

/**
 * print_name - Prints a name
 *
 * @name: Name to print
 * @f: Function pointer to print the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		printf("Name: ");
		(*f)(name);
	}
}

/**
 * print - Prints a string
 *
 * @str: String to print
 *
 * Return: void
 */
void print(char *str)
{
	if (str != NULL)
	{
		printf("%s\n", str);
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char name[] = "John Doe";
	print_name(name, print);
	return (0);
}

