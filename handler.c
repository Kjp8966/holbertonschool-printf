#include "main.h"

/**
 * handler - handles format
 *
 * @str: str fmt
 *
 * @lt: arg list
 *
 * Return: size of args with size of base str
**/

int handle_print(const char *str, va_list lt)
{
	int i, j, h;

	i = 0;

	for (j = 0; str[j] != 0; j++)
	{
		if (str[j] == '%')
		{
			h = handle_burger_helper(str, lt, &j);
			if (h == -1)
				return (-1);

			i += h;
			continue;
		}

		_putchar(str[j]);
		i = i + 1;
	}


	return (i);
}

/**
 * handle_burger_helper - % format control
 *
 * @str: str fmt
 *
 * @lt: arg list
 *
 * @e: iter8r
 *
 * Return: size of numbs and elems printed
 **/

int handle_burger_helper(const char *str, va_list lt, int *e)
{
	int sz, g, numfm;
	fmt fmts[] = {
		{'s', print_str}, {'c', print_char},
		{'d', print_int}, {'i', print_int},
	};

	*e = *e + 1;

	if (str[*e] == '\0')
		return (-1);

	if (str[*e] == '%')
	{
		_putchar('%');
		return (1);
	}

	numfm = sizeof(fmts) / sizeof(fmts[0]);
	for (sz = g = 0; g < numfm; g++)
	{
		if (str[*e] == fmts[g].fomt)
		{
			sz = fmts[g].fn(lt);
			return (sz);
		}

	}

	_putchar('%'), _putchar(str[*e]);

	return (2);
}
