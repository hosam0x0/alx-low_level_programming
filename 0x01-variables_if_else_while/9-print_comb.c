#include <stdio.h>
/**
 * main - prints all combaination of single digits
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (a = 0; a < 58; a++)
	{
		putchar(a + '0');
		if (a < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
