#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @c: The number to be computed.
 * Return: Absolute value of number or zero
 */
int _abs(int c)

{
	if (c < 0)
	{
	int a_value;

	a_value = c * -1;
	return (a_value);
	}
	return (c);
}
