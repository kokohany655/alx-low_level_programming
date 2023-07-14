#include <stdio.h>
/**
 * main - print alphabet to lower case
 * Return: 0 (Success)
 */
int main(void)
{
	char c;
	c= 'a';
	while (c <= 'z'){
		putchar(c);
		c++;
	}
	putchar('\n');
return (0);
}
