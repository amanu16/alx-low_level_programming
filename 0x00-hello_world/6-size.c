#include <stdio.h>
/**
 * main - entry point
 * Return:  always 0
 */
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(S)\n", sizeof(int));
printf("size of a long int: %lu byte(S)\n", sizeof(long int));
printf("size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("size of a float: %lu byte(s)\n", sizeof(float));
return (0);
}
