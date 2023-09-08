#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 10; n <= 30; n++)
	{
		for (m = 11; m <= 31; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 30 || m != 31)
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

