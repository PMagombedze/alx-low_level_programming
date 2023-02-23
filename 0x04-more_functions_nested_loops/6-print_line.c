#include "main.h"

/**
 * print_line - print _ n times
 * @n: number of times to print _
 * Return: printed _ n times
 */

void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i += 1)
{
_putchar('_');
}
}
_putchar('\n');
}
