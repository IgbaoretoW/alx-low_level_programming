#include<stdio.h>
/**
 * main - pront lowercase alphabets except q and e
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 97, i < 123, i++)
	{
		if (i != 101 && != 113)
		{
			putchar(i);
		}
	}
	putchar("\n");
	return (0);
}