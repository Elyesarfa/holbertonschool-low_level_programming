#include "main.h"
/**
* _strlen - calculates the length of a string
* @s: The string to calculate the length of
* Return: The length of the string
*/
int _strlen(char *s)
{
int length = 0;
while (*s)
{
length++;
s++;
}
return length;
}
/**
* puts_half - prints the second half of a string followed by a new line
* @str: The input string
*/
void puts_half(char *str)
{
int length = _strlen(str);
int half = (length + 1) / 2;
int i;
for (i = half; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
