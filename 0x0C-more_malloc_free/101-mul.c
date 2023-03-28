#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	unsigned int num1, num2, result, i, j;
	char *endptr;

	/* Check for correct number of arguments */
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	/* Convert arguments to integers */
	for (i = 1; i < 3; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (98);
			}
		}
	}
	num1 = strtoul(argv[1], &endptr, 10);
	num2 = strtoul(argv[2], &endptr, 10);

	/* Multiply the numbers */
	result = num1 * num2;

	/* Print the result */
	printf("%u\n", result);

	return (0);
}

