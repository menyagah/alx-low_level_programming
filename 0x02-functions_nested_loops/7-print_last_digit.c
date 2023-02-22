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
char last_digit_char = last_digit + '0';
putchar(last_digit_char);
return last_digit;
}
