#include "main.h"

/**
 * more_numbers - print 0 to 14 10 times
 */

void print_long(long value) {
if(value != 0) {
print_long(value / 10);
_putchar((value % 10) + '0');
}
}

void more_numbers(void)
{
int j = 0;
int i = 0;

for (j = 0; j <= 10; j += 1)
{
for (i = 0; i < 15; i += 1)
{
print_long(i);
}
_putchar('\n');
}
_putchar('\n');
}
