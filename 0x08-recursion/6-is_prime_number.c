#include "main.h"

/**
 * is_prime_number - check prime number
 * my_prime - check prime
 * @n: number to check
 * Return: 1 if true, 0 otherwise
 */

int i = 2;

int is_prime_number(int n)
{
return (my_prime(n, i + 1));
}

/**
 * my_prime - check prime
 * @n: number to check
 * @i: keep track
 * Return: 1 if true
 */

int my_prime(int n, int i)
{
if (n <= 2)
{
return (n == 2);
}
if (n % i == 0)
{
return (0);
}
if (i * i > n)
{
return (1);
}
return (my_prime(n, i + 1));
}
