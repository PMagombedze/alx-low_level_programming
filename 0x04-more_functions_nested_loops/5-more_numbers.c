#include "main.h"

/**
 * more_numbers - print 0 to 14 10 times
 */

void more_numbers(void)
{
int j = 0;
int i = 0;

for (j = 0; j <= 10; j += 1)
{
for (i = 0; i <= 14; i += 1)
{
_putchar(i + '0');
}
_putchar('\n');
}
_putchar('\n');
}
