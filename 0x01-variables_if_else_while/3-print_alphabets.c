#include <stdio.h>

/**
 * main - prints alphabet in lowercase and uppercase
 * Return: 0
 * */

int main(void)

{

	char x;
	char y;

	for (x = 'a' ; x <= 'z' ; x++)

	{
			putchar(x);

	}

	for (y = 'A' ; y <= 'Z' ; y++)

	{
			putchar(y);

	}
	putchar('\n');

	return (0);
}
