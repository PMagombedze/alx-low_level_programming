#include "main.h"
#include <string.h>

/**
 * pal_check - check palindrome
 * @s: str to check
 * @a: int
 * @e: int
 * Return: results
 */

int pal_check(char *s, int a, int e)
{
if (a == e)
{
return (1);
}
if (s[a] != s[e])
{
return (0);
}
if (a < e + 1)
{
return (pal_check(s, a + 1, e - 1));
}
return (1);
}

/**
 * is_palindrome - check if string is palindrome
 * @s: string to check
 * Return: 1 if true, otherwise 0
 */

int is_palindrome(char *s)
{
int n = strlen(s);
if (n == 0)
{
return (1);
}
return (pal_check(s, 0, n - 1));
}
