#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees list
 * @head: head pointer
 *
 * Return: void
 */
void free_list(list_t *head)
{
list_t *temp = head;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
return (0);
}
