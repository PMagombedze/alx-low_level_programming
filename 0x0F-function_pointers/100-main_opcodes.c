#include <stdio.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
int i;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
i = atoi(argv[1]);
if  (i < 0)
{
printf("Error\n");
exit(2);
}
return (0);
}
