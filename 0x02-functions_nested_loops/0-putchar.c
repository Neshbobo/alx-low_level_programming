#include "main.h"

/**
* main - Entry point
*
* Description: This program prints "_putchar" followed by a new line and
*              returns 0.
*
* Return: Always 0
*/
int main(void)
{
if (_putchar('_') == -1 || _putchar('p') == -1 || _putchar('u') == -1
|| _putchar('t') == -1 || _putchar('c') == -1 || _putchar('h') == -1
|| _putchar('a') == -1 || _putchar('r') == -1 || _putchar('\n') == -1)
{
return -1; /* Print error */
}

return (0);
}
