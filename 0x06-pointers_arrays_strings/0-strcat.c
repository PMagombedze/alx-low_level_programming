#include "main.h"

/**
 * _strcat - function to concatenate 2 strings
 * @dest: dest pointer
 * @src: src pointer
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
int i = 0;
int j;

for (i = 0; dest[i] != 0; i++)
{

}
for (j = 0; src[j] != 0; j++; i++)
{
dest[i] = src[j];
}
dest[i] = 0;
return (dest);
}
