#include <stdio.h>
/**
 * main - main
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 9)
			putchar(i + '0');
			putchar(' ')
		else
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	}
return (0);
}
