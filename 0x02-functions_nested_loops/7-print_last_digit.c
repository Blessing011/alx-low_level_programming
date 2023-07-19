#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number
 * Return: value of the last digit number
 */
int print_last_digit(int n)
{
	int lt;
		lt = n % 10;
	if (lt < 0)
	lt *= -1;
	_putchar(lt + '0');
	return (lt);
}
