#include "main.h"

/**
 * get_print - get print function
 * @s: string specifier
 * Description: structs array functions
 * Return: pointer
 */

int (*get_print(char s))(va_list, flags_t *)
{
	pha func_arr[] = {
		{'i', print_int},
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_hex_big},
		{'b', print_binary},
		{'o', print_octal},
		{'R', print_rot13},
		{'r', print_rev},
		{'S', print_bigS},
		{'p', print_address},
		{'%', print_percent}
	};
	int flags = 14;

	register int i;

	i = 0;
	while (i < flags)
	{
		if (func_arr[i].c == s)
			return (func_arr[i].f);
		i++;
	}
	return (NULL);
}
