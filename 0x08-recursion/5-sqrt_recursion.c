#include "main.h"

/**
 * helper - this function returns natural square root of n to sqrt_recursion
 * @n: the number to find the square root of
 * @i: the helper integer
 * Return: the integer natural square root
 */

int helper(int n, int i)
{
if (n == (i * i))
return (i);
else if (n > (i * i))
return (helper(n, i + 1));
else
return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer input parameter
 * Return: the natural square root of n
 */

int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
else if (n == 1)
return (1);
else if (n < 0)
return (-1);
else
return (helper(n, 1));
}
