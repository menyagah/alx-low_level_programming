#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @num: integer to check
 *
 * Return: returns last digit
 */
int print_last_digit(int num)
{
int last_digit = num % 10;
if (last_digit < 0)
}
last_digit *= -1;
}
putchar(last_digit + '0');
return last_digit;
}
