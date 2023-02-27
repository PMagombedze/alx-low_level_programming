#include "main.h"

/**
 * _strlen - return length of a string
 * @s: string to get length
 * Return: string length
 */

int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; ++i);
return (i);
}
