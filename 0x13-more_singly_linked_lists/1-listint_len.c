 #include "lists.h"

/**
* listint_len - Returns the number of elements in a listint_t linked list.
* @h: A pointer to the head of the list.
*
* Return: The number of nodes in the linked list.
*/
size_t listint_len(const listint_t *h)
{
size_t count = 0;  /* Variable to count the number of nodes */

while (h != NULL)
{
h = h->next;  /* Move to the next node */
count++;  /* Increment the count */
}

return (count);  /* Return the number of nodes */
}

