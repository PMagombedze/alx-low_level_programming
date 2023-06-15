#include "lists.h"

/**
 * sum_dlistint - returns the sum of list data
 * @head: head pointer
 *
 * Return: sum of the data, 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

if (head != NULL)
{
while (head->prev != NULL)
{
head = head->prev;
}
while (head != NULL)
{
sum += head->n;
head = head->next;
}
}
if (sum != 0)
{
return (sum);
}
else
{
return (0);
}
}
