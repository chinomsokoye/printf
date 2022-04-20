#include "main.h"

/**
 * print_hex - prints hexadecimal in lower
 * @l: argument va_list from _printf
 * @f: pointer
 * Description: converts input to correct base
 * Return: number of char printed
 */

int print_hex(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = converter(num, 16, 1);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0x");
	count += _puts(str);
	return (count);
}

/**
 * print_hex_big - prints hexadecimal inn upper
 * @l: argument va_list from _printf
 * @f: pointer
 * Description: converts input to correct base
 * Return: number of char printed
 */

int print_hex_big(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = converter(num, 16, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0X");
	count += _puts(str);
	return (count);
}

/**
 * print_binary - prints in binary base 2
 * @l: argument va_list from _printf
 * @f: pointer
 * Description: converts input to appropriate base
 * Return: number of char printed
 */

int print_binary(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = converter(num, 2, 0);

	(void)f;
	return (_puts(str));
}

/**
 * print_octal - prints in base 8
 * @l: argument va_list from _printf
 * @f: pointer
 * Description: converts to appropriate base
 * Return: number of char printed
 */

int print_octal(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = converter(num, 8, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _putchar('0');
	count += _puts(str);
	return (count);
}
