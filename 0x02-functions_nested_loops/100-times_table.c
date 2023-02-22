#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the times table to print
 */
void print_times_table(int n)
{
if (n < 0 || n > 15)
{
return;
}
int i, j;

for (i = 0; i <= n; i++) 
{
for (j = 0; j <= n; j++) 
{
int product = i * j;
if (j == 0) 
{
printf("%d", product);
}
else if (product < 10) 
{
putchar(' ');
putchar(' ');
putchar('0' + product);
}
else if (product < 100) 
{
putchar(' ');
putchar('0' + product / 10);
putchar('0' + product % 10);
}
else
{
putchar('0' + product / 100);
putchar('0' + (product / 10) % 10);
putchar('0' + product % 10);
}

if (j != n) {
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
}

