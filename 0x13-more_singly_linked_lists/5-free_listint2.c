#include "lists.h"

/**
* free_listint2 - Frees a listint_t linked list and sets the head to NULL.
* @head: A pointer to a pointer to the head of the list.
*
* Description: This function frees the memory allocated for each node
*              in the list and sets the head pointer to NULL.
*/
void free_listint2(listint_t **head)
{
listint_t *current;
listint_t *next_node;

if (head == NULL || *head == NULL)
return;

current = *head;

while (current != NULL)
{
next_node = current->next;
free(current);
current = next_node;
}

*head = NULL;
}
