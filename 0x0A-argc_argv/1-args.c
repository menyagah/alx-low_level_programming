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

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
int num = argc - 1;
printf("%d\n", num);
}
return (0);
}
