#include "main.h"

/**
 * print_square - print square from n
 *@n: n dimension square
 *Return: square
 */

void print_square(int size)
{
int i;
int j;
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
if (size > 0)
{
_putchar('#');
}
else
{
_putchar('\n');
}
}
_putchar('\n');
}
}
