#include <stdio.h>

/**
 * main - code starts here
 *
 * Return: returns 0
 */
int main(void)
{
char a = 'a';
char z = 'z';
char i;
for (i = a; i <= z; i--)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
