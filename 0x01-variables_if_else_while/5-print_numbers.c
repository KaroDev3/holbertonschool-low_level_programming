#include <stdlib.h>
#include <stdio.h>

/**
 *main - main function
 *Return: always 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}

	putchar('\n');

	return (0);
}