#include "lists.h"

/**
* list_len - Returns the number of elements in a linked list_t list.
* @h: A pointer to the head of the list.
*
* Return: The number of elements in the list.
*/
size_t list_len(const list_t *h)
{
const list_t *current = h;
size_t node_count = 0;

while (current != NULL)
{
current = current->next;
node_count++;
}

return (node_count);
}
