#include "main.h"

/**
 * _sqrt_recursion - return square root of a number
 * @n: number to find square root of
 * Return: -1 if n does'nt have natural square root
 */

int _sqrt_recursion(int n)
{
int j;
j = 2 * n + 1;
if (n == 1)
{
return (1);
}
else if ((n % 2) && (j % 3) != 0)
{
return (-1);
}
else if ((n % 2) == 0)
{
return (n / _sqrt_recursion(n / 2));
}
else if ((2 * n + 1) % 3 == 0)
{
return (n / _sqrt_recursion(n / 3));
}
return (1);
}
