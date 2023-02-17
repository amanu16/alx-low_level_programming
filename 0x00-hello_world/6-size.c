#include <stdio.h>
/**
 * main - entry
 * Return - always 0 (successfull)
 */
int main(void)
{
	char z;
	int y;
	long int x;
	long long int w;
	float v;

	printf("Size of a char: %zu byte(s)\n", sizeof(z));
	printf("Size of an int: %zu byte(S)\n", sizeof(y));
	printf("size of a long int: %zu byte(S)\n", sizeof(x));
	printf("size of a long long int: %zu byte(s)\n", sizeof(w));
	printf("size of a float: %zu byte(s)\n", sizeof(v));

	return (0);
}
