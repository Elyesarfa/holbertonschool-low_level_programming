#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

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
