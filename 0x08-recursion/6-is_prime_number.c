#include "main.h"

/**
 * main_checker - prime checker
 * @x: integer input parameter
 * @y: denominator
 * Return: 0 (non prime) or 1 (prime)
 */

int main_checker(int x, int y)
{
if ((x % y == 0) && (y < x))
return (0);
if (x == y)
return (1);
else
return (main_checker(x, y + 1));
}

/**
 * is_prime_number - checks if a number is a prime
 * @n: integer input parameter
 * Return: 1 if n is a prime number, else 0
 */

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (main_checker(n, 2));
}
