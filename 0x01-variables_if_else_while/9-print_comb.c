#include <stdio.h>

/**
 * main - start of the program
 *
 * Return: return 0
 */

int main(void) {
int i, j;
for (i = 0; i < 10; i++)
{
putchar(i + '0');

for (j = i + 1; j < 10; j++)
{
putchar(',');
putchar(' ');
putchar(i + '0');
putchar(j + '0');
}
}

return 0;
}


