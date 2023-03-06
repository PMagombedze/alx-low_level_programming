#include "main.h"

/**
 * _strchr - locate char in string
 * @s: string to use
 * @c: character to locate
 * Return: pointer to 1st occurrence of c
 */

char *_strchr(char *s, char c)
{
int i = 0;
for (; s[i] >= 0; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
}
return (0);
}
