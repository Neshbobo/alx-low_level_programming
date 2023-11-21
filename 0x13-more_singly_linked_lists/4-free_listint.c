#include "lists.h"

/**
* free_listint - Frees a listint_t linked list.
* @head: A pointer to the head of the list.
*
* Description: This function frees the memory allocated for each node
*              in the list and sets the head pointer to NULL.
*/
void free_listint(listint_t *head)
{
listint_t *current;

while (head != NULL)
{
current = head;
head = head->next;
free(current);
}
}
