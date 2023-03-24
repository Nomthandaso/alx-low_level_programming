#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: variable number of strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strng;
	char *str;
	unsigned int i;

	va_start(strng, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strng, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strng);
}
