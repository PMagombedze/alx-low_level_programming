#include "main.h"

/**
 * flip_bits - sets the value of a bit to 0 at a given index.
 * @n: integer
 * @m: integer
 *
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count = 0;
while (n || m)
{
if ((n & 1) != (m & 1))
{
count += 1;
}
n >>= 1;
m >>= 1;
}
return (count);
}
