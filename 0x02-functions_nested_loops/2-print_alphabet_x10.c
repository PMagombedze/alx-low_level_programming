#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 */

void print_alphabet_x10(void)
{
int i = 1;
char ch1 = 'a';
for (ch1 = 'a'; ch1 <= 'z'; ch1 += 1)
{
_putchar(ch1);
}
for (i = 1; i <= 10; i += 1)
{
_putchar(ch1);
}
}
