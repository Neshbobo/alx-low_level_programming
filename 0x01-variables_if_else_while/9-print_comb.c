#include <stdio.h>

/**
* main - Entry point of the program
*
* Return: Always 0 (success)
*/
int main(void)
{
int digit;

for (digit = 0; digit <= 9; digit++)
{
putchar('0' + digit);

/* If not the last digit, print a comma and space */
if (digit != 9)
{
putchar(',');
putchar(' ');
}
}

/* Print a newline character at the end */
putchar('\n');

return (0);
}







