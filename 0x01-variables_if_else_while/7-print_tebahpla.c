#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase reverse
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(i + 'a');
	}
	putchar('\n');

	return (0);
}
