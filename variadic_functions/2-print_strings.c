#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
va_start(args, n);
for (i = 0; i < n; i++)
{
char *x = va_arg(args, char *);
printf("%s", x);
if (i < n - 1 && separator != NULL)
printf("%p", separator);
}
va_end(args);
printf("\n");
}
