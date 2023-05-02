#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print alphabets in lowercase'
 * Return: Always 0
 */
int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
