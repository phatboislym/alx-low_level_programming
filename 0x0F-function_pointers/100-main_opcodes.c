#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: arguments
 * Return: error plus 1 or 2
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	char *file = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", file[i] & 0XFF);
		if (i != bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
