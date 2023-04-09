#include <stdio.h>
#include "main.h"

/**
 * main - print all the arguments it receives, one argument per line
 *
 * return: 0
 */

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

