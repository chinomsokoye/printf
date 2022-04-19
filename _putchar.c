#include <unistd.h>

/**
 * _putchar - writes to standard output
 * @c: character
 * Return: 1
 * On error -1, errno is appropriately set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
