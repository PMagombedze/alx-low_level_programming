#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: integer
 * @index: index
 *
 * Return: converted number, b NULL otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int temp = 1;
if (index > 64)
{
return (-1);
}
while (index > 0)
{
index--;
temp *= 2;
}
*n += temp;
return (1);
}
