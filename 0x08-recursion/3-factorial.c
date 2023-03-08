#include "main.h"

/**
 * factorial - return factorial of an integer
 * @n: number to get factorial of
 * Return: -1 if n less than 0
 */

int factorial(int n)
{
if (n == 0 || n == 1)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (n * factorial(n - 1));
}
}
