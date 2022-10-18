#include <stdio.h>
/**
 * main - prints all combaination of single digits
 * Return: Always 0
 */
int main(void)
	{
	int n;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
	}
