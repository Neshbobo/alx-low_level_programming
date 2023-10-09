#include <stdio.h>

/**
* main - Entry point of the program
*
* Return: Always 0 (success)
*/
int main(void)
{
int num1, num2;

for (num1 = 0; num1 <= 99; num1++)
{
for (num2 = num1; num2 <= 99; num2++)
{
/* Print the first two digits */
putchar('0' + (num1 / 10));
putchar('0' + (num1 % 10));

/* Print a space */
putchar(' ');

/* Print the next two digits */
putchar('0' + (num2 / 10));
putchar('0' + (num2 % 10));

/* If not the last combination, print a comma and space */
if (num1 != 99 || num2 != 99)
{
putchar(',');
putchar(' ');
}
}
}

/* Print a newline character at the end */
putchar('\n');

return (0);
}

