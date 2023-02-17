#include <stdio.h>
/**
 * main - entry point
 * Return:  always 0 (success)
 */
int main(void)
{
char z;
int y;
long int x;
long long int w;
float v;
printf("Size of a char: %lu byte(s)\n", sizeof(z));
printf("Size of an int: %lu byte(S)\n", sizeof(y));
printf("size of a long int: %lu byte(S)\n", sizeof(x));
printf("size of a long long int: %lu byte(s)\n", sizeof(w));
printf("size of a float: %lu byte(s)\n", sizeof(v));
return (0);
}
