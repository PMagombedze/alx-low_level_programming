#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: header pointer
 *
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
unsigned int i = 0;
const listint_t *temp = h;
while (temp != NULL)
{
i += 1;
temp = temp->next;
}
return (i);
}
