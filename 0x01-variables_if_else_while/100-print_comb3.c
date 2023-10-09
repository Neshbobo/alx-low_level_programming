#include <stdio.h>

/**
* main - Entry point of the program
*
* Return: Always 0 (success)
*/
int main(void)
{
int digit1, digit2;

for (digit1 = 0; digit1 <= 8; digit1++)
{
for (digit2 = digit1 + 1; digit2 <= 9; digit2++)
{
putchar('0' + digit1);
putchar('0' + digit2);

/* If not the last combination, print comma and space */
if (digit1 != 8 || digit2 != 9)
{
putchar(',');
putchar(' ');
}
}
}

/* Print a newline character at the end */
putchar('\n');

return (0)
}
