#include "main.h"

/**
 * print_bigS - prints characters
 * @l: argument va_list from _printf
 * @f: pointer
 * Return: char of nuumbers printed
 */

int print_bigS(va_list l, flags_t *f)
{
	int i, count = 0;
	char *res;
	char *s = va_arg(l, char *);

	(void)f;
	if (!s)
		return (_puts("(null)"));

	i = 0;
	while (s[i])
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x");
			count += 2;
			res = converter(s[i], 16, 0);
			if (!res[1])
				count += _putchar('0');
			count += _puts(res);
		}
		else
			count += _putchar(s[i]);
		i++;
	}
	return (count);
}

/**
 * print_rev - prints string in reverse
 * @l: argument from _printf
 * @f: pointer
 * Return: string
 */

int print_rev(va_list l, flags_t *f)
{
	int i = 0, j;
	char *s = va_arg(l, char *);

	(void)f;
	if (!s)
		s = "(null)";
	while (s[i])
		i++;
	j = i - 1;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	return (i);
}

/**
 * print_rot13 - prints string using rot13
 * @l: argument from _printf
 * @f: pointer
 * Return: string
 */

int print_rot13(va_list l, flags_t *f)
{
	int i, j;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(l, char *);

	(void)f;
	for (j = 0; s[j]; j++)
	{
		if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
			_putchar(s[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (s[j] == rot13[i])
					_putchar(ROT13[i]);
			}
		}
	}
	return (j);
}

/**
 * print_percent - prints percent
 * @l: va_list arguument from _printf
 * @f: pointer
 * Return: number of char printed
 */

int print_percent(va_list l, flags_t *f)
{
	(void)l;
	(void)f;
	return (_putchar('%'));
}
