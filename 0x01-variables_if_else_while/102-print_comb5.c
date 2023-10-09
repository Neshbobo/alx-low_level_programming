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
/* Check if the numbers are equal or have the same tens digit */
if (num1 / 10 <= num2 / 10)
{
/* Print the tens digit of num1 (if it's zero, print '0') */
putchar((num1 / 10 == 0) ? '0' : '0' + num1 / 10);

/* Print the ones digit of num1 */
putchar('0' + num1 % 10);

/* Print a space between the two numbers */
putchar(' ');

/* Print the tens digit of num2 (if it's zero, print '0') */
putchar((num2 / 10 == 0) ? '0' : '0' + num2 / 10);

/* Print the ones digit of num2 */
putchar('0' + num2 % 10);

/* If not the last combination, print comma and space */
if (num1 != 99 || num2 != 99)

{
putchar(',');
putchar(' ');
}
}
}
}

/* Print a newline character at the end */
putchar('\n');

return (0);
}






