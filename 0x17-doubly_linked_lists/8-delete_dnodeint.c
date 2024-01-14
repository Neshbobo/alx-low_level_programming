#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes the node at a given index
* @head: Pointer to a pointer to the head of the doubly linked list
* @index: Index of the node to be deleted (starting from 0)
*
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head, *temp;
unsigned int i;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}

for (i = 0; i < index - 1; i++)
{
if (current == NULL)
return (-1);
current = current->next;
}

if (current == NULL || current->next == NULL)
return (-1);

temp = current->next;
current->next = temp->next;
if (temp->next != NULL)
temp->next->prev = current;
free(temp);

return (1);
}
