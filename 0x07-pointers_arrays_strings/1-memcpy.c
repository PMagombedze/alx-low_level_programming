#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: number of bytes
 * @dest: memory area destination
 * @src: memory area source
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
int size = n;
for (; i < size; i++)
{
src[i] = dest[i];
n--;
}
return (dest);
}
