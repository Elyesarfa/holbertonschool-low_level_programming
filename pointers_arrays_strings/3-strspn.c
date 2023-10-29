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
int found;
while (*s)
{
int found = 0;
char *temp_accept = accept;
found = 0;
while (*temp_accept)
{
if (*s == *accept)
{
count++;
found = 1;
break;
}
temp_accept++;
}
if (found == 0)
break;
s++;
accept -= count;
}
return (count);
}
