#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: header pointer
 * 
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
const listint_t *temp = h;
size_t count = 0;
while (temp != NULL)
{
count+=1;
temp = temp->next;
}
return (count);
}
