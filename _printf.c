#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - Prints output according to a given format
 *
 * @format: A str containing the text 2B printed w/ format specifiers which are
 *          replaced with corresponding arg vals.
 *
 * @...: Variadic args 2B printed according to format.
 *
 * Return: # characters printed (excluding null byte used to end str output)
 */

int _printf(const char *format, ...)
{
	int size;
	va_list args;

	if (format == NULL)
		return (-1);

	size = _strlen(format);
	if (size <= 0)
		return (0);

	va_start(args, format);
	size = handle_print(format, args);

	_putchar(-1);
	va_end(args);

	return (size);
}
