#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num: the number to extract the last digit from
 *
 * Return: the value of the last digit
 */
int print_last_digit(int num)
{
int last_digit =  num % 10;
if (last_digit < 0)
{
last_digit *= -1;
}
_putchar(last_digit + '0');
return (last_digit);
}
