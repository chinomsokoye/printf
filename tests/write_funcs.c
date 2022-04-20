#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character to output
 * @c: character
 * Return: 1
 * On error -1 and errno set appropriately
 * Description: _putchar writes
 */

int _putchar(char c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}

/**
 * _puts - prints string to output
 * @str: string pointer
 * Return: char written
 */

int _puts(char *str)
{
	register int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
