#include <stdio.h>

/**
* main - Entry point
* program prints the numbers from 1 to 100, followed by a new line
* but for multiples of three, it prints Fizz instead of the number
* and for the multiples of five print Buzz
* for numbers which are multiples of both three and five print FizzBuzz
* each number or word should be separated by a space
* Return: 0
*/

int main(void)
{
int i = 1;
for (i = 1; i < 101; i++)
{
	if ((i % 3 == 0) && (i % 5 == 0))
	{
		printf("FizzBuzz ");
	}
	else if (i % 3 == 0)
	{
		printf("Fizz ");
	}
	else if (i % 5 == 0)
	{
		printf("Buzz ");
	}
	else
	{
		printf("%i ", i);
	}
}
printf("\n");
return (0);
}
