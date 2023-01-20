#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i;
	char curr_char;

	va_start(args, format);
	i = 0;

	while (format[i])
	{
		curr_char = format[i];
		if (curr_char == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		else if (curr_char == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (curr_char == 'f')
		{
			printf("%f", va_arg(args, double));
		}
		else if (curr_char == 's')
		{
			char *s = va_arg(args, char*);

			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
		}
		i++;
		if (format[i])
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(args);
}
