#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n : integer variable
 * Return: 0
 */

int _abs(int n)
{

if (n < 0) /*if n is greater than zero*/
{
return (n * (-1));
}

else if (n == 0) /*if n is equal 0*/
{
return (0);
}

else
{
return (n); /*if n is positive*/
}

}
