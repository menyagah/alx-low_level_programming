#include "main.h"

/**
 * print_to_98 - a function that prints natural numbers to 98
 * @n: value to be used
 *
 */
void print_to_98(int n)
{
    while (n != 98)
    {
        putchar(n / 10 + '0'); 
        putchar(n % 10 + '0');  
        putchar(',');           
        putchar(' ');           
        if (n < 98)
            n++;                
        else
            n--;                
    }

    putchar('9');               
    putchar('8');               
    putchar('\n');              
}
