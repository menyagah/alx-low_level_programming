#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @num: integer to check
 *
 * Return: returns zero
 */
int print_last_digit(int num)
{
int num = num  % 10;
char last_char_digit = num  + '0';
_putchar(last_char_digit);
return (0);
}
