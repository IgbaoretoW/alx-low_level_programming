#include"main.h"
/**
 * _print_rev_recursion- prints a recursion string in reverse
 * @s: The string to be printed
 */
void _print_rev_recursion(char *s)
{
	if(*s)
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
}
