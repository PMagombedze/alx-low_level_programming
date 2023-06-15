#include "lists.h"

/**
 * dlistint_len - list length
 * @h: - head pointer
 *
 * Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
int c = 0;

if (h == NULL)
{
return (c);
}

while (h->prev != NULL)
{
h = h->prev;
}

while (h != NULL)
{
c += 1;
h = h->next;
}

return (c);
}

