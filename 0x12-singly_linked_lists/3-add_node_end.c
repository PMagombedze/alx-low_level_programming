#include <string.h>
#include "lists.h"

/**
 * add_node_end - add node at beginning
 * @head: head pointer
 * @str: string to be duplicated
 *
 * Return: address of new element, NULL otherwise
 */
list_t *add_node_end(list_t **head, const char *str)
{
char *j;
unsigned int i = 0;
list_t *newNode = malloc(sizeof(list_t));
list_t *lastNode = *head;
newNode->len = i;
newNode->next = NULL;
if (*head == NULL)
{
*head = newNode;
}
else
{
j = strdup(str);
newNode->str = j;
while (lastNode->next != NULL)
{
lastNode = lastNode->next;
}
lastNode->next = newNode;
}
return (newNode);
}
