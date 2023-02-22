#include <unistd.h>

/**
*_putchar- writes the charactor C to stdout
*c: the caractor that the code will print
*Return: on success 1
*on error, -1 returned
*/

int _putchar(char c)
{
return (write(1,&c,1));
}
