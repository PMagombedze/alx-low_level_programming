#include "main.h"
#include <string.h>

/**
 * wildcmp - compare 2 strings
 * @s1: first one
 * @s2: second one
 * Return: 1 if true, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == ' ')
{
return (1);
}
if (*s2 == ' ')
{
return (1);
}
if (*s1 == '\0' && *s2 == '\0')
{
return (0);
}
if (*s1 == '\0')
{
return (1);
}
if (*s2 == '\0')
{
return (1);
}
if (*s1 == *s2)
{
return (1);
}
else
{
return (1);
}
}
