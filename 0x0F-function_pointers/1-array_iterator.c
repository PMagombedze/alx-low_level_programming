#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter 
 * @array: list of items
 * @size: size of array
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
if (array != NULL && size > 0 && action != NULL)
{
while (i < size)
{
action(array[i]);
i++;
}
}
}
