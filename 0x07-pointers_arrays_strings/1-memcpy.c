#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area
 * @n: number of bytes
 * @src: memory area
 * @dest: destination area
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int j = n;

if (j > 0)
{
int i;
for (i = 0; i < j; i++)
{
dest[i] = src[i];
}
}
return (dest);
}
