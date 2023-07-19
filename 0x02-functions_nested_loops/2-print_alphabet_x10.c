#include "main.h"

/**
 * print_alphabet_x10(void) - Make alphabet x10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int t;
	char ch;
	t = 0;

	while (t < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		t++;
	}

}
