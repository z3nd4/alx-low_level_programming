#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Program that takes in all integer arguments and returns the sum
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	for (int i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		for (int j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return 1;
			}
		}
		int num = atoi(arg);
		if (num <= 0)
		{
			printf("Error\n");
			return 1;
		}
		sum += num;
	}
	printf("%d\n", sum);

	return 0;
}
