#include "main.h"

/**
 * prime_helper - checks recursively if a number is prime
 * @n: number being checked
 * @d: current divisor being tested
 *
 * Return: 1 if prime, 0 otherwise
 */
int prime_helper(int n, int d)
{
    /* If divisor squared is greater than n, no factors found */
    if (d * d > n)
        return (1);

    /* If n is divisible by d, it is not a prime number */
    if (n % d == 0)
        return (0);

    /* Try next possible divisor */
    return (prime_helper(n, d + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
    /* Numbers less than or equal to 1 are not prime */
    if (n <= 1)
        return (0);

    /* Start checking from divisor 2 */
    return (prime_helper(n, 2));
}