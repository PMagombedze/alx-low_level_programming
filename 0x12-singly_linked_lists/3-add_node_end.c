#include <string.h>
#include "lists.h"

/**
 * add_node_end - add node at beginning
 * @head: head pointer
 * @str: string to be duplicated
 *
 * Return: address of newNode element, NULL otherwise
 */
list_t *add_node_end(list_t **head, const char *str)
{
char *j;
unsigned int i = 0;
list_t *newNode = malloc(sizeof(list_t));
list_t *temp = *head;
while (str[i])
{
i++;
}
if (!newNode)
{
return (NULL);
}
j = strdup(str);
newNode->str = j;
newNode->len = i;
newNode->next = NULL;
if (*head == NULL)
{
*head = newNode;
return (newNode);
}
while (temp->next)
{
temp = temp->next;
}
temp->next = newNode;
return (newNode);
}
