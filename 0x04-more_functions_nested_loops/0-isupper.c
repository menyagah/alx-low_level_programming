#include "main.h"

/**
 * _isupper - prints whether a letter is upper or lower
 * @c : interger to check
 * Return: zero
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else if (c >= 97 && c <= 122)
{
return (0);
}
return (0);
}
