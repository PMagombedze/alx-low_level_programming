#include "main.h"

/**
 * *_strncpy - funct that copies a string
 * @dest: dest pointer
 * @src: src pointer
 * @n: number of bytes to use
 * Return: dest pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
for (i = 0; i < n && src[i] != 0; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = 0;
}
return (dest);
}
