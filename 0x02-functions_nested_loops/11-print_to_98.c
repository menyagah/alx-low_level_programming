#include "main.h"

/**
 * print_to_98 - a function that prints natural numbers to 98
 * @n: value to be used
 *
 */
void print_to_98(int n)
{
    while (n != 98)
    {
        printf("%d, ", n);

        if (n < 98)
            n++;
        else
            n--;
    }

    printf("%d\n", n);
}
