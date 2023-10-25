#include "main.h"

/**
* _puts_recursion - Prints a string, followed by a new line.
* @s: The string to be printed.
*
* Description: This function recursively prints each character of the
* provided string until it reaches the null terminator '\0'. It then
* adds a new line character to create a new line after the string.
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');  
return;
}

putchar(*s);  
_puts_recursion(s + 1);  
}

int main(void)
{
char *str = "Hello, world!";
_puts_recursion(str);  
return (0);
}






