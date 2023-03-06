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
unsigned int i;
i = 0;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
