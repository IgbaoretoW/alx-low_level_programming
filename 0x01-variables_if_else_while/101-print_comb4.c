
#include<stdio.h>
/**
 * main - prints all possible combinations of 3 numbers.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int a, b, c;
	
	for (a = 48; a <= 56; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			for (c = 50: c <= 58; c++)
			{
				if (c > b && b > a)
				{
					putchar (a);
					putchar (b);
					putchar (c);
					if (a != 56 || b != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
		putchar('\n');
		return (0);
}
