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

/**
* sqrt_helper - Helper function for calculating the square root recursively
* @n: The number to calculate the square root of
* @x: The current guess
*
* Return: The square root of n, or -1 if n does not have a natural square root
*/
int sqrt_helper(int n, int x)
{
if (x * x == n)
return (x);
if (x * x > n)
return (-1);
return (sqrt_helper(n, x + 1));
}





