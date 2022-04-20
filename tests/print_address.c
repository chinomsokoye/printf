#include "main.h"

/**
 * print_address - prints address
 * @l: argument
 * @f: pointer
 * Return: printed character numbers
 */

int print_address(va_list l, flags_t *f)
{
	char *str;
	unsigned long int p = va_arg(l, unsigned long int);

	register int count = 0;

	(void)f;

	if (!p)
		return (_puts("(nil)"));
	str = converter(p, 16, 1);
	count += _puts("0x");
	count += _puts(str);
	return (count);
}
