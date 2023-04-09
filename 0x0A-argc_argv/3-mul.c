#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Program that takes first two integer arguments and prints the product
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if not enough arguments passed in, 0 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int result = a * b;
	printf("%d\n", result);

	return (0);
}
