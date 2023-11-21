#include "lists.h"

/**
* insert_nodeint_at_index - func takes three arguments.
* @head: A pointer to a pointer to the head of the list.
* @idx: The index at which the new node should be added. Index starts at 0.
* @n: The integer value to be stored in the new node.
*
* Return: The address of the new node, or NULL if it failed.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node;
listint_t *current = *head;
unsigned int count = 0;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
while (count < idx - 1 && current != NULL)
{
current = current->next;
count++;
}

if (current == NULL)
{
free(new_node);
return (NULL);
}

new_node->next = current->next;
current->next = new_node;

return (new_node);
}
