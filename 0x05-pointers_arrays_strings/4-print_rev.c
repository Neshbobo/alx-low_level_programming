#include "main.h"
#include <stdio.h>

/**
* print_rev - Prints a string in reverse followed by a new line.
*
* @s: A pointer to the string to be printed in reverse.
*
* Description:
* This function takes a pointer to a string as a parameter and prints the
* string in reverse order to the standard output (stdout), followed by a
* new line '\n'.
*
* Return: None.
*/
void print_rev(char *s)
{
if (s != NULL)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}

for (int i = length - 1; i >= 0; i--)
{
putchar(s[i]);
}

putchar('\n');
}
}



