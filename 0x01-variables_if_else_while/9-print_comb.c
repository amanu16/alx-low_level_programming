#include <stdio.h>
/**
 * main - main block
 * Description: program that prints all possible combinations of
 * single-digit numbers
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
