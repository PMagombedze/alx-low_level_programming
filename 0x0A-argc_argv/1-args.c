#include <stdio.h>
#include "main.h"
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: void
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
if (argc > 0)
{
printf("%d\n", argc - 1);
}
return (0);
}
