#include "main.h"
#include <stdio.h>

/**
 * main - Entry point. Prints the name of the program, followed by a new line.
 *
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the strings which are those arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char** argv)
{
(void) argv;

printf("%d\n", argc - 1);

return (0);
}
