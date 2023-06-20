#include<stdio.h>
/**
 * main - prints all possible combinations of 2 numbers.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i, f;

	for (i = 48; i <= 56; i++)
	{
		for (f = 49; f <= 57; f++)
	{
		if (f > i)
		{
		putchar ('i');
		putchar ('f');
			if (i != 56 || f != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	}
	putchar('\n');
	return (0);
}
