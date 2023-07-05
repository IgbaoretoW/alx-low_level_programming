#include "main.h"
#include <unistd.h>
/**
*_putchar- writes the character c to step it
*@c: character to print
*
*Return: 1 (Success)
*on error, -1 is returned, and errno is set appropriately
*/
int _putchar(char c)
{
	return (write(1,&c,1));
}
