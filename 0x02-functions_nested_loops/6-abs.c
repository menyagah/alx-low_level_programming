#include "main.h"

/**
 * _abs - function that returns the absolute value of an integer
 * @num: integer to check
 *
 * Return: -@num if @num is negative, @num if num is positive
 */
int _abs(int num)
{
if (num < 0)
{
return (-num);
}
return (num);
}
