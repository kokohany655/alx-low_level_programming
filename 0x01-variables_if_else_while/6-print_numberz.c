#include <stdio.h>
/**
 * main - print 0 to 10 and don't use the char type
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
return (0);
}
