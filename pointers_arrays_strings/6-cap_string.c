#include "main.h"
#include <stdio.h>
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
if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' ||
*ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' ||
*ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
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
