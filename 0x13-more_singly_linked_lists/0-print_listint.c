#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* print_listint - Prints all elements of a listint_t linked list.
* @h: A pointer to the head of the list.
*
* Return: The number of nodes in the linked list.
*/
size_t print_listint(const listint_t *h)
{
size_t count = 0;  

while (h != NULL)
{
printf("%d\n", h->n);  
h = h->next;  
count++;  
}

return (count);  
}

/**
* main - Entry point of the program, demonstrating the print_listint function.
*
* Return: Always 0 (Success)
*/
int main(void)
{
/* Create a sample linked list */
listint_t node1 = {1, NULL};
listint_t node2 = {2, NULL};
listint_t node3 = {3, NULL};

node1.next = &node2;
node2.next = &node3;

/* Print the elements of the linked list and get the count */
size_t node_count = print_listint(&node1);

/* Print the count */
printf("Number of nodes: %lu\n", node_count);

return (0);
}
