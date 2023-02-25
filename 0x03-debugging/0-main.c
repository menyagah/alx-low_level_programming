#include "main.h"
#include <stdio.h>

/**
* main - tests the positive_or_negative() function
* Return: 0
*/

int main(void)
{
int i = 0;

positive_or_negative(i);

if (i == 0)
{
printf("%d is zero\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
else
{
printf("%d is positive\n", i);
}
return (0);
}

