#include "lists.h"

/**
 * add_dnodeint - add node node at beginning
 * @hdead: hdead pointer
 * @n: value
 *
 * Return: address of node element, othderwise null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newNode, *hd;
newNode = malloc(sizeof(dlistint_t));

if (newNode == NULL)
{
return (NULL);
}
newNode->n = n;
newNode->prev = NULL;
hd = *head;

if (hd != NULL)
{
while (hd->prev != NULL)
{
hd = hd->prev;
}
}

newNode->next = hd;

if (hd != NULL)
{
hd->prev = newNode;
}
*head = newNode;

return (newNode);
}
