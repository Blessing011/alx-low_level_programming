#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - Entry point
 *
 * Return:void
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
