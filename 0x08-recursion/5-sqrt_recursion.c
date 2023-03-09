#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function that returns natural square root of a number
 * @n: parameter one
 *
 * Return: returns the natural square root
 */

int _sqrt_helper(int n, int i);

int _sqrt_recursion(int n) {
    if (n < 0) {
        return -1; // Negative number doesn't have a natural square root
    }
    return _sqrt_helper(n, 0); // Start with i = 0
}

int _sqrt_helper(int n, int i) {
    if (i * i == n) {
        return i; // Found the natural square root
    }
    if (i * i > n) {
        return -1; // Not a perfect square
    }
    return _sqrt_helper(n, i + 1); // Continue with i + 1
}
