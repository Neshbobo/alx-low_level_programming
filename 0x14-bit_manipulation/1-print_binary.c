#include "main.h"

/**
* print_binary - Prints the binary representation of a number.
* @n: The unsigned long int to be converted and printed.
*
* Return: void.
*/
void print_binary(unsigned long int n)
{
int shift = sizeof(unsigned long int) * 8 - 1;

while (shift > 0 && !(n & (1UL << shift)))
shift--;

while (shift >= 0)
{
putchar((n & (1UL << shift)) ? '1' : '0');
shift--;
}

putchar('\n');
}
