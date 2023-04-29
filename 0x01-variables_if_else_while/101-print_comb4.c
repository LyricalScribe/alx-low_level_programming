#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int m, n, p;

	for (m = '0'; m < '9'; m++)
	{
		for (n = m + 1; n <= '9'; n++)
		{
			for (p = n + 1; p <= '9'; p++)
			{
				if ((n != m) != p)
				{
					putchar(m);
					putchar(n);
					putchar(p);

					if (m == '7' && n == '8')
						continue;

					putchar(',');
					putchar(' ');
				}
			}

		}

	}
	putchar('\n');
	return (0);
}
