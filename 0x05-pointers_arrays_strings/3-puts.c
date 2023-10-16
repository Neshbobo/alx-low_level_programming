#include "main.h"
#include <unistd.h>

/**
* _puts - Prints a string followed by a new line to stdout.
*
* @str: A pointer to the string to be printed.
*
* Description:
* This function takes a pointer to a string as a parameter and prints the
* string to the standard output (stdout), followed by a new line '\n'.
*
* Return: None.
*/
void _puts(char *str)
{
if (str != NULL)
{
while (*str != '\0')
{
write(1, str, 1);
str++;
}
write(1, "\n", 1);
}
}

