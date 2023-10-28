#include "main.h"
/**
* cap_string - Capitalizes all words of a string.
* @str: The string to be capitalized.
*
* Return: A pointer to the changed string.
*/
int is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
for (int i = 0; separators[i]; i++)
{
if (c == separators[i])
{
return (1);
}
}
return (0);
}
char *cap_string(char *str)
{
int capitalize = 1;
for (int i = 0; str[i]; i++)
{
if (is_separator(str[i]))
{
capitalize = 1;
}
else if (capitalize && str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 'a' + 'A';
capitalize = 0;
}
else if (str[i] >= 'A' && str[i] <= 'Z')
{
str[i] = str[i] - 'A' + 'a';$
}
}
return (str);
}
