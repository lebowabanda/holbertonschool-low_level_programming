#include "main.h"
#include <stddef.h>

/**
 * _strlen_recursion - finds the length of a string using recursion
 * @s: input string
 *
 * Return: number of characters in the string
 */
int _strlen_recursion(char *s)
{
    /* If string is NULL or we reached the end */
    if (s == NULL || *s == '\0')
        return (0);

    /* Count current character + rest of the string */
    return (1 + _strlen_recursion(s + 1));
}