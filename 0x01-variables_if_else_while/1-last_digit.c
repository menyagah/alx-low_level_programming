#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - starting point of the program
 *
 * Return: returns zero
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int last_digit = n % 10;
printf("%d last digit of", n " is", last_digit); 
return (0);
}
