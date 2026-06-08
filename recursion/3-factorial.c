#include "main.h"

/**
 * factorial - calculates the factorial of a number recursively
 * @n: the number to calculate factorial for
 *
 * Return: factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
    /* Factorial is not defined for negative numbers */
    if (n < 0)
        return (-1);

    /* Base case: 0! = 1 and 1! = 1 */
    if (n == 0 || n == 1)
        return (1);

    /* Recursive case: n * (n - 1)! */
    return (n * factorial(n - 1));
}