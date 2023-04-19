#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: list of items
 * @size: number of elements in array
 * @cmp:  pointer to the function to be used to compare values
 *
 * Return: index of first element, -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (array == NULL || cmp == NULL)
{
return (-1);
}
if (size <= 0)
{
return (-1);
}
while (i < size)
{
if (cmp(array[i]) == 1)
{
return (i);
}
i++;
}
return (-1);
}
