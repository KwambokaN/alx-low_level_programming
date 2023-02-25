include "main.h"
/*
 * stdio for input and output function
 * main-Entry point
 */
/**
 * positive_or_negative -check value if its positive, negative, or zero
 * @n: checks value
 * Return: always return 0 on success
 */
void positive_or_negative(int)
{
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	printf("%d is positive\n", n);
	else
		printf("%d is zero\n", n);
