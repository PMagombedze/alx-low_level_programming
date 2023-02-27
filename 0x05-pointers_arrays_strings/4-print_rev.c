#include "main.h"

/**
 * print_rev - function to print string in reverse
 * @s: string to be reversed
 */

void print_rev(char *s)
{
int i;
int j;
int length;
for (i = 0; s[i] != '\0'; ++i)
{

}
i = length;
for (j = length - i; j >= 0; j--)
{
if (s[j] == ' ')
{
_putchar( &(s[j]) + 1);
}
}
_putchar(s);
}
