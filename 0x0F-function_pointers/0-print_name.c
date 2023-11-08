#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - Prints a name using a custom function.
* @name: The name to be printed.
* @f: A function pointer for printing the name.
*/
void print_name(char *name, void (*f)(char *))
{
/* Check if the name and function pointer are valid */
if (name != NULL && f != NULL)
{
f(name); /* Call the custom printing function */
}
}
