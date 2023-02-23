#include "main.h"

/**
 * print_diagonal - print / n times
 * @n: number of times to print /
 * Return: printed / n times
 */

void print_diagonal(int n)
{
int i;
int j;
for (i = 1; i <= n; i += 1)
{
if (n <= 0)
{
_putchar('\n');
}
for(j = 0; j < n; j++)
{
if(j == i)
_putchar('\\');
else
_putchar(' ');
}
_putchar('\n');
}
}
