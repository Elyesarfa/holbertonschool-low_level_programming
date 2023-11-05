#include "main.h"
/**
* _pow_recursion - recursive power function
*
* @x: base integer
* @y: exponent integer
*
* Return: x raised to the power of y.
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
if (y % 2 == 0)
return (_pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
else
return (x * _pow_recursion(x, y - 1));
}
