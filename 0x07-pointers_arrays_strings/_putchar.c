#include"main.h"
#include<unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to be print
 *
 * Return: 1 (Success)
 * On error, -1 is return, errno is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
