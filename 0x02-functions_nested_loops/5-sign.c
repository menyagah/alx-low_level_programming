#include "main.h"

/**
 * print_sign - checks if a number is positive or negative and prints the sign
 * @n : integer to check
 *
 * Return: 1 if postive, 0 if zero, -1 if negative
 */

int print_sign(int n)
{
if (n > 0)
{
printf(+);
return (1);
}
else if (n == 0)
{
printf(0);
return (0);
}
else
{
printf(-);
return (-1);
}
}
