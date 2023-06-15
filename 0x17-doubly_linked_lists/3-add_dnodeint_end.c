#include "lists.h"

/**
 * add_dnodeint_end - adds a node node at the end
 * @head: head pointer
 * @n: value
 *
 * Return: address of node element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newNode, *hd;
newNode = malloc(sizeof(dlistint_t));
if (newNode == NULL)
{
return (NULL);
}
newNode->n = n;
newNode->next = NULL;
hd = *head;
if (hd != NULL)
{
while (hd->next != NULL)
{
hd = hd->next;
}
hd->next = newNode;
}
else
{
*head = newNode;
}
newNode->prev = hd;
return (newNode);
}
