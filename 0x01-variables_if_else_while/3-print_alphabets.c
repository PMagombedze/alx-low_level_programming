#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch1 = 'a';
char ch2 = 'A';
for (ch1 = 'a'; ch1 <= 'z'; ch1 += 1)
{
putchar(ch1);
}
for (ch2 = 'A'; ch2 <= 'Z'; ch2 += 1)
{
putchar(ch2);
}
putchar('\n');
return (0);
}
