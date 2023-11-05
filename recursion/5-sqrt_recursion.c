#include "main.h"
/**
* _sqrt_recursion - recursive power function
*
* @n: integer to find the square root of
*
* Return: the natural square root of n
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
if (n % 2 == 0)
return (_sqrt_recursion(n / 2) * _sqrt_recursion(n / 2));
else
return (n / 2 + _sqrt_recursion(n / 2 + 1) * _sqrt_recursion(n / 2 + 1));
}
