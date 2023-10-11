#include <stdio.h>
#include <stddef.h>

#include "search_algos.h"

/**
 * linear_search - search algorithm
 * @array: list of values
 * @size: size of array
 * @value: value being searched
 *
 * Return: index of value if found, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
size_t i = 0;
for (i = 0; i < size; ++i)
{
printf("Value checked array[%ld] = %d\n", i, array[i]);
if (*(array + i) == value)
{
return (i);
}
}
return (-1);
}
