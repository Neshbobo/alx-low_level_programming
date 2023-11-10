#include <stdio.h>
#include "variadic_functions.h"

/**
* sum_them_all - Sum all parameters.
* @n: Number of parameters.
*
* Return: Sum of parameters, 0 if n is 0.
*/
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
va_list args;

if (n == 0)
return (0);

va_start(args, n);
while (n--)
sum += va_arg(args, int);
va_end(args);

return (sum);
}
