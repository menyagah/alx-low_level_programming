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
printf("0 is zero\n");
}
return (0);
}

