#include <stdio.h>

/**
 * main - start of the prgram
 *
 * Return: returns (0)
 */
int main(void)
{
char a = 'a';
char z = 'z';
char i;
for (i = a; i <= z; i++)
{
if (i == 'e' || i == 'q')
{
continue;
}
putchar(i);
}
putchar('\n');
return (0);
}
