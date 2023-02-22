#include "main.h"

/**
 * print_sign - a function compares input with zero
 * @n: is a number to be compared
 * Return: 1 if n is greater than 0
 * or 0 if n equals 0
 * otherwise -1 if n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		_putchar (',');
		_putchar (' ');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		_putchar (',');
		_putchar (' ');
		return (0);
	}
	else
	{
		_putchar ('0');
		_putchar (',');
		_putchar (' ');
		return (0);
	}
}
