#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory are
 * @n: number of bytes
 * @b: constant byte
 * @s: pointer
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
int j = n;
if (j > 0)
{
for (i = 0; i < j; i++)
{
s[i] = b;
}
}
return (s);
}
