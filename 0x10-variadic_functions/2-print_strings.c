#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print string
 * @separator: string to be printed
 * @n: number of strings passed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i = 0;
char *s;
va_start(args, n);
for (i = 0; i < n; i++)
{
s = va_arg(args, char *);
if (s)
{
printf("%s", s);
}
else
{
printf("(nil)");
}
if (i < (n - 1))
{
if (separator)
{
printf("%s", separator);
}
}
}
printf("\n");
va_end(args);
}

