#include <stdio.h>

/**
 * main - Write a script that generates the assembly code of a C code and save it in an output file.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of a char: %zu bytte(s)\n", sizeof(char));
        printf("size of a int: %zu bytte(s)\n", sizeof(int))
	printf("size of a long int: %zu bytte(s)\n", sizeof(long int));
	printf("size of a long long int: %zu bytte(s)\n", sizeof(long long int));
	printf("size of a float: %zu bytte(s)\n", sizeof(float));
    return (0);
}
