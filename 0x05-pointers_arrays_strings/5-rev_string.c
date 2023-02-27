#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{

int i;
int j;
int k;
char *a, p;
a = s;

while (s[c] != 0)
{
c++;
}
for (k = 1; k < j; k++)
{
a++;
}
for (i = 0; i < (j / 2); i++)
{
p = s[i];
s[i] = *a;
*a = p;
a--;
}
}
