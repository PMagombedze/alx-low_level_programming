#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = '0';
char ch2 = 'a';
for (ch = '0'; ch <= '9'; ch = ch + 1)
{
putchar(ch);
}
for (ch2 = 'a'; ch2 <= 'f'; ch2 = ch2 + 1)
{
putchar(ch2);
}
putchar('\n');
return (0);
}
