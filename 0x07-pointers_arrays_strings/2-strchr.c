#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate a character
 * @c: character to locate
 * @s: string with character c
 * Return: pointer to first occurence of c
 * or NULL if c is not found
 */

char *_strchr(char *s, char c)
{
int i = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
}
return (NULL);
}
