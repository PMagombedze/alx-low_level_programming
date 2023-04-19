#include "3-calc.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
int ag1, ag2, res;
int (*f)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
ag1 = atoi(argv[1]);
ag2 = atoi(argv[3]);
f = get_op_func(argv[2]);
if (!f)
{
printf("Error\n");
exit(99);
}
res = f(ag1, ag2);
printf("%d\n", res);
return (0);
}
