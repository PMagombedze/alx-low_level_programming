#include <stdio.h>
#include "main.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: void
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
printf("\n");
return (0);
}
