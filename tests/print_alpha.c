#include "main.h"

/**
 * print_string - prints chara from a looped string
 * @l: argument va_list from _printf
 * @f: pointer
 * Return: num of char printed
 */

int print_string(va_list l, flags_t *f)
{
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_char - prints character
 * @l: argument va_list from _printf
 * @f: pointer
 * Return: number of char printed
 */

int print_char(va_list l, flags_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
