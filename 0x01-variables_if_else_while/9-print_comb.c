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
if (i != 9)
{
putchar(',');
}
for (j = i + 1; j < 10; j++)
{
putchar(i + '0');
putchar(j + '0');
if (i != 9 || j != 8)
{
putchar(',');
}
}
}

return 0;
}

