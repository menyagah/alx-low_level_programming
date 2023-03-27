#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers
 * @argc: The number of arguments passed
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    int sum = 0;
    int num;
    int i;

    /* Check if there are any arguments */
    if (argc == 1)
    {
        printf("0\n");
        return (0);
    }

    /* Iterate over the arguments and add up the positive integers */
    for (i = 1; i < argc; i++)
    {
        char *arg = argv[i];
        int j = 0;

        while (arg[j] != '\0')
        {
            if (!isdigit(arg[j]))
            {
                printf("Error\n");
                return (1);
            }
            j++;
        }

        num = atoi(arg);

        if (num > 0)
        {
            sum += num;
        }
    }

    printf("%d\n", sum);

    return (0);
}

