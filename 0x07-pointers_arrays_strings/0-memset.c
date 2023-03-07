#include "main.h"

/**
 * _memset - funct fills first n bytes of memory
 * @n: number of bytes
 * @s: memory area
 * @b: constant byte
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
int size = n;
int i = 0;
for (i = 0; i < size; i++)
{
s[i] = b;
}
return (s);
}
