#include "main.h"

/**
 * *_strncat - funct to concatenate 2 strings
 * @dest: dest pointer
 * @src: src pointer
 * @n: number of bytes to concatenate
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j;
for (i = 0; dest[i] != 0; i++)
{

}
for (j = 0; j < n && src[j] != 0; j++, i++)
{
dest[i] = src[j];
}
dest[i] = 0;
return (dest);
}
