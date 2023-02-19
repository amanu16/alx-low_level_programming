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

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");
	return (0);
}
