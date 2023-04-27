#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints elements
 * @h: head pointer
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
unsigned int i = 0;
const list_t *temp = h;
while (temp != NULL)
{
i++;
temp = temp->next;
}
return (i);
}
