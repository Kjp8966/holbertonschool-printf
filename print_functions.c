#include "main.h"
#include "string.h"

/**
 * print_char - print char
 *
 * @ls: va_list
 *
 * Return: 1
 */
int print_char(va_list ls)
{
	int h;

	h = va_arg(ls, int);

	_putchar(h);

	return (1);
}

/**
 * print_str - print str
 *
 * @ls: va_list
 *
 * Return: str len
 */

int print_str(va_list ls)
{
	char *goat;
	int goat_len;

	goat = va_arg(ls, char*);
	goat_len = (goat != NULL) ? _strlen(goat) : _strlen("(null)");

	write(1, (goat != NULL) ? goat : "(null)", goat_len);

	return (goat_len);
}

/**
 * print_int - printeger
 *
 * @ls: int 2 print
 *
 * Return: num length
 **/

int print_int(va_list ls)
{
	int nm = va_arg(ls, int);
	int i, lamb, ram;
	char bfr[1024];
	memset(bfr, 0, sizeof(bfr));
	
	if (nm == 0)
	{
		bfr[0] = '0';
		write(1, bfr, 1);
		return (1);
	}
	if (nm < 0)
	{
		lamb = -1;
		nm *= -1;
		bfr[0] = '-';
		write(1, bfr, 1);
	}
	else
	{
		lamb = 1;
	}
	for (i = 0; nm > 0; i++)
	{
		bfr[i] = '0' + (nm % 10);
		nm /= 10;
	}
	if (lamb == -1)
	{
		ram = i + 1;
	}
	else
	{
		ram = i;
	}
	for (i = ram - 1; i >= 0; i--)
	{
		write(1, &bfr[i], 1);
	}
	return (ram);
}
