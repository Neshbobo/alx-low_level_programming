#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *listint_len - func takes one parameter h
 *@h: are values at n
 *Return: no of counts;
*/

size_t listint_len(const listint_t *h)
{
size_t n = 0;
while (h)
{
h = h->next;
n++;
}
return (n);
}
