#include "main.h"

/**
 * binary_to_uint - prints the binary representation of a number
 * @n: integer to convert to binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
int j;
unsigned long int i;
if (n == 0)
{
printf("0");
return;
}
for (i = n, j = 0; (i >>= 1) > 0; j++)
{
;
}
for (; j >= 0; j--)
{
(1 & (n >> j)) ? printf("1") : printf("0");
}
}
