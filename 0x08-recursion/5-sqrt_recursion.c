#include "main.h"

/**
* _sqrt_recursion - Returns the natural square root of a number
* @n: The number to calculate the square root of
*
* Return: The square root of n, or -1 if n does not have a natural square root
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (sqrt_helper(n, 0));
}
