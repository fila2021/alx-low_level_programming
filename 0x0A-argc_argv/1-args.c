#include <stdio.h>
/**
 * main - Display the number of arguments passed to it.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{

		printf("%d\n", argc - 1);

	return (0);
}
