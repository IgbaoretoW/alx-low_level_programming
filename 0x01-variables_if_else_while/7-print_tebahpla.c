#include<stdio.h>
/**
 * main - print alohabets in reverse
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char alpharev:

	for (alpharev = 'z', alpharev >= 'a', alpharev--)
	{
		putchar(alpharev);
	}
	putchar("\n");
	return (0);
}
