#include <unistd.h>

/**
 * _putchar - writesnthe character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returne, and errno is set appropriately.
 */
int _putchar (char c)
{
	return (write(1, &c, 1));
}
