#include "main.h"
/**
* _strlen - returns the length of a string
* @str: input string
* Return: length of the string
*/
int _strlen(char *str)
{
int length = 0;
while (str[length] != '\0')
{
length++;
}
return (length);
}
/**
* puts_half - prints half of a string, followed by a new line.
* @str: input string
*/
void puts_half(char *str)
{
int length = _strlen(str);
int start;
if (length % 2 == 0)
{
start = length / 2;
}
else
{
start = (length - 1) / 2;
}
while (str[start] != '\0')
{
_putchar(str[start]);
start++;
}
_putchar('\n');
}
