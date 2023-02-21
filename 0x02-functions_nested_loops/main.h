#include <stdio.h>


void putChar()
{
char name[] = "_putchar";
printf("%s\n", name);
}


void print_alphabet()
{
char ch1 = 'a';
for (ch1 = 'a'; ch1 <= 'z'; ch1 += 1)
{
putchar(ch1);
}
putchar('\n');
}

