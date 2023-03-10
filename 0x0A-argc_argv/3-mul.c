#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: void
 */

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error");
printf("\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
