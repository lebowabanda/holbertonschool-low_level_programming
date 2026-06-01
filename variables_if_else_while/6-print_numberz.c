#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 *
 * Return: 0 (Success)
 */
int main(void)
{
    int i;

    for (i = 48; i <= 57; i++)
    {
        putchar(i);
    }

    putchar('\n');

    return (0);
}