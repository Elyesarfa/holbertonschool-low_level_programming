#include "main.h"
/**
* is_digit - checks if a character is a digit
* @c: The character to check
* Return: 1 if the character is a digit, 0 otherwise
*/
int is_digit(char c)
{
return (c >= '0' && c <= '9');
}
/**
* _atoi - converts a string to an integer
* @s: The input string
* Return: The integer converted from the string
*/
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int found_digit = 0;
while (*s)
{
if (*s == '-')
{
sign *= -1;
}
else if (is_digit(*s))
{
result = result * 10 + (*s - '0');
found_digit = 1;
}
else if (found_digit)
{
break;
}
s++;
}
return (result *sign);
}
