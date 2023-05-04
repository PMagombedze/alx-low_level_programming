#include "main.h"

/**
 * get_bit - convert binary to integer
 * @n: integer
 * @index: index
 *
 * Return: value of the bit at index, -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int temp;
temp = n >> index;
return (temp & 1);
}
