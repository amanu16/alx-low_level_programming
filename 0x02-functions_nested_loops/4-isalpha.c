#include "main.h"

/**
 * _isalpha - a function identify charactor
 * @c: a parameter to be checked
 * Return: 1 if it is a charactor
 * else print 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
