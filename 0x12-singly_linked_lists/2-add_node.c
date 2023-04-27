#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add node at beginning
 * @head: head pointer
 * @str: string to be duplicated
 *
 * Return: address of new element, NULL otherwise
 */
list_t *add_node(list_t **head, const char *str)
{
char *j;
unsigned int i = 0;
list_t *newNode = malloc(sizeof(list_t));
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
newNode->next = (*head);
(*head) = newNode;
return (*head);
}
