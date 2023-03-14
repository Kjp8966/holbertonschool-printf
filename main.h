#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
*/

typedef struct format
{
	char fomt;
	int (*fn)(va_list);
} fmt;


	int _printf(const char *format, ...);

/****************** HANDLER ******************/
	int handle_print(const char *str, va_list ls);
	int handle_burger_helper(const char *str, va_list, int *e);

/****************** FUNCTIONS ******************/
	int print_char(va_list);
	int print_str(va_list);
	int print_percent(va_list);
	int print_int(va_list);

/****************** UTILZ ******************/
	int _putchar(char c);
	int _strlen(const char *str);

#endif /* MAIN_H */
