#include "main.h"
#include <stdio.h>
/**
* is_separator - Checks if a character is a word separator.
* @c: The character to check.
*
* Return: 1 if c is a separator, 0 otherwise.
*/
int is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
for (int i = 0; separators[i] != '\0'; i++)
{
if (c == separators[i])
{
return (1);
}
}
return (0);
}
/**
* cap_string - Capitalizes all words in a string.
* @str: The string to capitalize.
*
* Return: A pointer to the resulting string.
*/
char *cap_string(char *str)
{
char *ptr = str;
int capitalize = 1;
while (*ptr != '\0')
{
if (is_separator(*ptr))
{
capitalize = 1;
}
else if (capitalize && *ptr >= 'a' && *ptr <= 'z')
{
*ptr -= 32;
capitalize = 0;
}
ptr++;
}
return (str);
}
