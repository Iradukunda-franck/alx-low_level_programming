#include "main.h"
/**
 * is_prime_helper - checks if a number is prime
 *
 * @n: input integer to check
 * @div: divisor to check n against
 *
 * Return: 1 if prime, 0 if not prime
 */
int is_prime_helper(int n, int div)
{
if (n < 2)
return (0);
if (div * div > n)
return (1);
if (n % div == 0)
return (0);
return (is_prime_helper(n, div + 1));
}

/**
 * is_prime_number - checks if a number is prime
 *
 * @n: input integer to check
 *
 * Return: 1 if prime, 0 if not prime
 */
int is_prime_number(int n)
{
return (is_prime_helper(n, 2));
}
