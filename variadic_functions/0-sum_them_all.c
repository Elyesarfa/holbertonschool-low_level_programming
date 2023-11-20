#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 * @...: variable number of parameters
 *
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
int sum_nums_all = 0;
unsigned int i;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
int x = va_arg(args, int);
sum_nums_all += x;
}
va_end(args);
return (sum_nums_all);
}
