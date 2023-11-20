#include "lists.h"

/**
* print_listint - Prints all elements of a listint_t linked list.
* @h: A pointer to the head of the list.
*
* Return: The number of nodes in the linked list.
*/
size_t print_listint(const listint_t *h)
{
size_t count = 0;  /* Variable to count the number of nodes */

while (h != NULL)
{
printf("%d\n", h->n);  /* Print the current element */
h = h->next;  /* Move to the next node */
count++;  /* Increment the count */
}

return (count);  /* Return the number of nodes */
}

