#include "lists.h"

/**
* print_list - Prints all the elements of a list_t linked list.
* @h: A pointer to the head of the list.
*
* Return: The number of nodes.
*/
size_t print_list(const list_t *h)
{
const list_t *current = h;
size_t node_count = 0;

while (current != NULL)
{
if (current->str != NULL)
printf("[%lu] %s\n", node_count, current->str);
else
printf("[%lu] (nil)\n", node_count);

current = current->next;
node_count++;
}

return (node_count);
}
