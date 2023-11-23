#include "main.h"

/**
* print_binary - Prints the binary representation of a number.
* @n: The input number.
*/
void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
int bit_flag = 0;

if (n == 0)
{
putchar('0');
return;
}

while (mask > 0)
{
if ((n & mask) == 0 && bit_flag == 1)
putchar('0');
else if ((n & mask) != 0)
{
putchar('1');
bit_flag = 1;
}
mask >>= 1;
}
}
