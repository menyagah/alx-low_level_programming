#include "main.h"

/**
 * print-alphabet_x10 - prints 10 times the  alphabet
 *
 */
void print-alphabet_x10(void)
{
char c;
int i;

for(i=0; i < 10; i++)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
}
