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

/**
* main - Entry point of the program, demonstrating the listint_len function.
*
* Return: Always 0 (Success)
*/
int main(void)
{
/* Create a sample linked list using the listint_t structure */
listint_t node1 = {1, NULL};
listint_t node2 = {2, NULL};
listint_t node3 = {3, NULL};

node1.next = &node2;
node2.next = &node3;

/* Get the number of elements in the linked list */
size_t node_count = listint_len(&node1);

/* Print the count */
printf("Number of nodes: %lu\n", node_count);

return (0);
}
