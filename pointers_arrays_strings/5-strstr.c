#include "main.h"
/**
* _strstr - finds the first occurrence of a substring in a string
* @haystack: The string to search in
* @needle: The substring to locate
* Return: A pointer to the beginning of the located substring, or NULL
* if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *a = haystack;
char *b = needle;
while (*a == *b && *b != '\0')
{
a++;
b++;
}
if (*b == '\0')
return (haystack);
}
return (0);
}
