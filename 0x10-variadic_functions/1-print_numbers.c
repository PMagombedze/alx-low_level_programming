#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: string to be printed
 * @n: number of integers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i = 0;
va_start(args, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (separator && i < (n - 1))
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
