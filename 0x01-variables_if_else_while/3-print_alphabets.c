#include <stdio.h>

/**
 * main - where the program starts
 *
 * Return: returns 0
 */

int main(void)
{
char a = 'a';
char z = 'z';
char A = 'A';
char Z = 'Z';
char i;
for (i = a; i <= z; i++)
{
putchar(i);
for (i = A; i <= Z; i++)
{
putchar(i);
}
}
putchar('\n');
return (0);
}
