#include <stdio.h>

/**
 * main - start of the program
 *
 * Return: return 0
 */

int main(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
for (j = i + 1; j < 10; j++)
{
putchar(i + '0');
putchar(j + '0');
if (i != 9 || j != 8)
{
putchar(',');
putchar(' ');
}
}
}

return 0;
}

