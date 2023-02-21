
/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
char ch1 = 'a';
for (ch1 = 'a'; ch1 <= 'z'; ch1 += 1)
{
_putchar(ch1);
}
_putchar('\n');
}

int main(void)
{
print_alphabet();
return (0);
}
