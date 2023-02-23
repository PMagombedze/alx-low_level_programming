#include "main.h"

/**
 * print_most_numbers - print 0 to 9 except for 2 and 
 */

void print_most_numbers(void)
{
char i = '0';
for (i = '0'; i <= '9'; i += 1)
{
if ((i == '2') && (i == '4'))
{
continue;
_putchar(i);
}
}
_putchar('\n');
}
