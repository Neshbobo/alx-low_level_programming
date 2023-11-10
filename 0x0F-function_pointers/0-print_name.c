#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - is our main function
* @name: is a name passed as a parameter
* @f: is a function(to a pointer )
* Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
if (name ==  NULL || f == NULL)
return;
f(name);
}

