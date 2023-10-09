#include <stdio.h>

int main(void)
{
int num1, num2;

for (num1 = 0; num1 <= 99; num1++)
{
for (num2 = num1; num2 <= 99; num2++)
{
/* Check if the numbers are equal or have the same tens digit */
if (num1 != num2 && (num1 / 10) <= (num2 / 10))
{
/* Print the tens digit of num1 */
putchar('0' + (num1 / 10));

/* Print the ones digit of num1 */
putchar('0' + (num1 % 10));

putchar(' '); /* Space between the two numbers */

/* Print the tens digit of num2 */
putchar('0' + (num2 / 10));

/* Print the ones digit of num2 */
putchar('0' + (num2 % 10));

/* Print comma and space if not the last combination */
if (num1 != 98 || num2 != 99)
{
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n'); /* Newline at the end */

return (0);
}






