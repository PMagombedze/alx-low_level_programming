#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch1 = 'a';
for (ch1 = 'a'; ch1 <= 'z'; ch1 += 1)
{
if (ch1 == 'e' || ch1 == 'q')
{
continue;
}
putchar(ch1);
}
putchar('\n');
return (0);
}
