#include "main.h"

/**
 * reverse_array - funct to reverse int array
 * @a: array pointer
 * @n: number of array elements
 */

void reverse_array(int *a, int n)
{
int i = 0;
int temp;
n = n - 1;
while (i <= n)
{
temp = a[i];
a[i++] = a[n];
a[n--] = temp;
}
}
