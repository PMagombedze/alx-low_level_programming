#include "main.h"

/**
 * _is_prime_number - check prime number
 * @n: number to check
 * Return: 1 if true, 0 otherwise
 */

int is_prime_number(int n)
{
int i = 2;
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
i++;
return is_prime_number(n);
}
