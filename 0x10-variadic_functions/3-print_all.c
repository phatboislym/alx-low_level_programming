#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  *print_all - prints anything
  *@format: list of types of arguments passed to the function
  *Return: no return
  */

void print_all(const char * const format, ...)
{
	unsigned int x;
	va_list list;
	char *s, *separator;

	va_start(args, format);

	separator = "";

	x = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator,  va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				x++;
				continue;
		}
		separator = ", ";
		x++;
	}

	printf("\n");
	va_end(args);
}
