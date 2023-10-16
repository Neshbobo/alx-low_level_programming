#include "main.h"
#include <stdio.h>

/**
* swap_int - Swaps the values of two integers.
*
* @a: Pointer to the first integer.
* @b: Pointer to the second integer.
*
* This function takes two pointers to integers as parameters and swaps
* the values of the integers they point to.
*/
void swap_int(int *a, int *b)
{
if (a != NULL && b != NULL)
{
int temp = *a;
*a = *b;
*b = temp;
}
}

