#include "main.h"
/**
* leet - Encodes a string into 1337.
* @str: The string to encode.
*
* Return: A pointer to the resulting string.
*/
char *leet(char *str)
{
char *ptr = str;
char leet_replace[] = "aAeEoOtTlL";
char leet_encoded[] = "4433007711";
while (*ptr != '\0')
{
int i = 0;
while (leet_replace[i] != '\0')
{
if (*ptr == leet_replace[i])
{
*ptr = leet_encoded[i];
break;
}
i++;
}
ptr++;
}
return (str);
}
