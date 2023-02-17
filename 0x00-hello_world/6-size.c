#include <stdio.h>
/**
 * main - entry
 * Return - always 0
 */
int main(void)
{
char z;
int y;
long int x;
long long int w;
float v;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(y));
printf("size of a long int: %lu byte(S)\n", (unsigned long)sizeof(x));
printf("size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(w));
printf("size of a float: %lu byte(s)\n",(unsigned long)sizeof(v));
return 0 (success);
}
