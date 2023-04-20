#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - calculate sum of all parameters
 * @n: number of parameters
 *
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int Sum = 0, i = 0;
if (n == 0)
{
return (0);
}
va_start(args, n);
for (i = 0; i < n; i++)
{
Sum += va_arg(args, int);
}
va_end(args);
return (Sum);
}
