#include "main.h"
#include <stdio.h>

/**
 * main - tests the _strlen_recursion function
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    int length;

    /* Get length of the string using recursion */
    length = _strlen_recursion("Cobin Colemane");

    /* Print the result */
    printf("%d\n", length);

    return (0);
}