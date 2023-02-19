#include <stdio.h>
/**
 * main - main block
 * Description: a program that display single digit base 10 numbers
 * which mans from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
	int i;
	char ch;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
