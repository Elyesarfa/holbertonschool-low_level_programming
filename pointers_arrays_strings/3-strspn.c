#include "main.h"
/**
* _strspn - gets the length of a prefix substring
* @s: The string to search in
* @accept: The string containing characters to search for
* Return: The number of bytes in the initial segment of s consisting
* only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int a;
while (*s)
{
for (a = 0; accept[n]; a++)
{
if (*s == accept[a])
{
count++;
break;
}
else if (accept[n + 1] == '\0')
return (count);
}
s++;
}
return (count);
}
