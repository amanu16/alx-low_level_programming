#include "main.h"

/**
 * _islower - a program that differ a char to small or cap
 *
 *@c: a character to be checked
 * Return: 1 if it is lowercase
 * and 0 if it is uppercase
 */
int _islower(int c)
{
	if (c >= 65 && c <= 90)
		return (0);
	else
		return (1);
}


