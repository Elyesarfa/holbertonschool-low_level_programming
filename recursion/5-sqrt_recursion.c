#include "main.h"
/**
* calculate_sqrt - Helper function to calculate the square root using recursion
* @n: The number for which to calculate the square root
* @guess: The current guess for the square root
*
* Return: The square root of n if found, -1 otherwise
*/
int calculate_sqrt(int n, int guess)
{
if (guess * guess == n)
return (guess);
if (guess * guess > n)
return (-1);
return (calculate_sqrt(n, guess + 1));
}
/**
* _sqrt_recursion - Main function to calculate the square root of a number
* @n: The number for which to calculate the square root
*
* Return: The square root of n if found, -1 otherwise
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return (calculate_sqrt(n, 1));
}
