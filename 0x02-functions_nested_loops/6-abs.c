#include "main.h"

/**
 * _abs - function that returns the absolute value of an integer
 * @num : integer to check
 *
 * Return : returns -num if num is < 0 and num if num is > 0
 */
int _abs(int num)
{
if (num < 0)
{
return (-num);
}
return (num);
}
