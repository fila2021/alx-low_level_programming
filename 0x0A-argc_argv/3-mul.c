#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the multiplication of two numbers followed by a new line.
 * @argc: The number of arguments provided to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program receives two arguments - 0 else - 1
 */
int main(int argc, char *argv[])
{
	int x, i, j;

if (argc != 3)
{
	printf("Error\n");
	return (1);
}
else
{
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	x = i * j;
	printf("%d\n", x);
}
return (0);
}
