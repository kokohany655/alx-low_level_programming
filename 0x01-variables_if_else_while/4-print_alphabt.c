#include <stdio.h>
/**
 * main - lowercase with out q and e
 * Return: 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
return (0);
}
