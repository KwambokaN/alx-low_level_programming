#include "variadic_functions.h"
#include <stdarg.h>

/**
 * Write a function that returns the sum of all its parameters.
 * Prototype: int sum_them_all
 * If n == 0, return 0
 * begin and end arg with va_start and va_end
 */
int sum(int arg, ...)
{
	int sum;
	va_list ap;

	va_start(ap, arg);
	int i = 0, sum = 0;

	for (i = 0; i < arg; i++)
		sum += va_arg(ap, int);



	va_end(ap);
	return (sum);
}

