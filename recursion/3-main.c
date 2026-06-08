#include "main.h"
#include <stdio.h>

/**
 * main - tests the factorial function with different inputs
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    int result;

    /* Test case 1 */
    result = factorial(1);
    printf("%d\n", result);

    /* Test case 2 */
    result = factorial(5);
    printf("%d\n", result);

    /* Test case 3 */
    result = factorial(10);
    printf("%d\n", result);

    /* Test case 4: negative input */
    result = factorial(-1024);
    printf("%d\n", result);

    return (0);
}