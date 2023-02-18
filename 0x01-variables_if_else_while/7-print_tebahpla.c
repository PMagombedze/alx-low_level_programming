#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch1 = 'z';
for (ch1 = 'z'; ch1 >= 'a'; ch1 -= 1)
{
putchar(ch1);
}
putchar('\n');
return (0);
}
