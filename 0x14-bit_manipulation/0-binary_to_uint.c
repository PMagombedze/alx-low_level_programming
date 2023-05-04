#include "main.h"

/**
 * binary_to_uint - convery binary to integer
 * @b: pointer to a string
 *
 * Return: converted number, b NULL otherwise
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int i = 0, j = 1, count;
int a;
count = strlen(b);
a = count - 1;
while (a >= 0)
{
if ((b[a] != '1' && b[a] != '0') | (b == NULL))
{
return (0);
}
if (b[a] == '1')
{
i += j;
}
j *= 2;
a--;
}
return (i);
}
