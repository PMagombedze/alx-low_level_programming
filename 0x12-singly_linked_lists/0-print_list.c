#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements
 * @h: head pointer
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
unsigned int i = 0;
const list_t *temp = h;
while (temp != NULL)
{
temp->str != NULL ? printf("[%d] %s\n", temp->len, temp->str) : printf("[0] (nil)\n");
i += 1;
temp = temp->next;
}
return (i);
}
