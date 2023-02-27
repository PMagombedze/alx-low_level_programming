#include "main.h"

/**
 * print_rev - function to print string in reverse
 * @s: string to be reversed
 */

void print_rev(char *s)
{
int i;
int j;
int temp;
i = 0;
j = 0;
while (s[i] != 0 )
{
j = j + 1;
}
j = j - 1;
while (j > i)
{
temp = s[j];
s[j = j - 1] = s[i];
s[i = i + 1] = temp;
}
}
