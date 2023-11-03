#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* is_positive_number - Checks if a string is a positive number.
* @s: The string to check.
*
* Return: 1 if it's a positive number, 0 otherwise.
*/
int is_positive_number(char *s)
{
if (s == NULL || *s == '\0')
return (0);

for (; *s; s++)
{
if (!isdigit(*s))
return (0);
}

return (1);
}

/**
* multiply - Multiplies two positive numbers.
* @num1: The first number.
* @num2: The second number.
*
* Return: The result of the multiplication.
*/
int multiply(char *num1, char *num2)
{
return (atoi(num1) * atoi(num2));
}

int main(int argc, char *argv[])
{
if (argc != 3 || !is_positive_number(argv[1]) || !is_positive_number(argv[2]))
{
printf("Error\n");
return (98);
}

int result = multiply(argv[1], argv[2]);
printf("%d\n", result);
    
return (0);
}

