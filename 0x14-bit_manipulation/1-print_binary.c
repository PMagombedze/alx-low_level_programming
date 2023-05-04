#include "main.h"

/**
 * binary_to_uint - prints the binary representation of a number
 * @n: integer to convert to binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
int i = 1;
unsigned long int b = 0;
size_t remainder;
while (n != 0)
{
remainder = n % 2;
n /= 2;
b += i * remainder;
i *= 10;
}
printf("%ld", b);
}
