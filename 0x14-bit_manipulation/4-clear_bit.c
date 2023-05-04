#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: integer
 * @index: index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int temp = 1;
if (index > 64)
{
return (-1);
}
temp = 1 << index;
if (temp & *n)
{
*n ^= temp;
}
return (1);
}
