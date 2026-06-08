#include "main.h"

/**
 * _pow_recursion - calculates x raised to the power of y using recursion
 * @x: base value
 * @y: exponent value
 *
 * Return: result of x^y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
    /* Invalid case: negative exponent not supported */
    if (y < 0)
        return (-1);

    /* Base case: anything to power 0 is 1 */
    if (y == 0)
        return (1);

    /* Recursive case: x * x^(y - 1) */
    return (x * _pow_recursion(x, y - 1));
}