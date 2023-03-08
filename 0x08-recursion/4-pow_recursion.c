#include "main.h"

/**
 * _pow_recursion - raise x power y
 * @x: base number
 * @y: power number
 * Return: -1 if y lower than 0
 */

int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y < 0)
{
return (-1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
