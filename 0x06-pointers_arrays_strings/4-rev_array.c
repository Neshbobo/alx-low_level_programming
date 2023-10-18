#include "main.h"
#include <stdio.h>

/**
* reverse_array - Reverse the content of an array of integers.
* @a: Pointer to the array of integers.
* @n: Number of elements in the array.
*/
void reverse_array(int *a, int n)
{
int temp, i;
int left = 0;
int right = n - 1;

while (left < right)
{
/* Swap the elements at left and right indices */
temp = a[left];
a[left] = a[right];
a[right] = temp;
/* Move the indices towards the center of the array */
left++;
right--;
}
}






