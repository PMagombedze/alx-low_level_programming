#include <stdio.h>
#include <stddef.h>

#include "search_algos.h"

/**
 * binary_search - search algorithm
 * @array: list of values
 * @size: size of array
 * @value: value being searched
 *
 * Return: index of value if found, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
int low = array[0];
int high = array[size];
int mid = (low + high) / 2;

if (array[mid] == value)
return (mid);
else if (array[mid] > value)
return (binary_search(array, (mid - 1) - low, value));
else
return (binary_search(array, high - (mid + 1), value));
}
