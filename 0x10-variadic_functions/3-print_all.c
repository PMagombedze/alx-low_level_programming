#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *st, *sep;
sep = "";
va_start(args, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
break;
case 's':
st = va_arg(args, char *);
if (!st)
{
st = "(nil)";
}
printf("%s%s", sep, st);
break;
}
sep = ", ";
i++;
}
}
printf("\n");
va_end(args);
}
