#include "main.h"

/**
 * binary_to_uint - prints the binary representation of a number
 * @n: integer to convert to binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
int i, arr[32];
if (n == 0)
{
printf("0");
}
for (i = 0; n > 0; i++)
{
arr[i] = n % 2;
n = n / 2;
}
for (i = i - 1; i >= 0; i--)
{
printf("%u", arr[i]);
}
}
