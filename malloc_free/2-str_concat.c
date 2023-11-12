#include "main.h"
#include <stdlib.h>
/**
* str_concat - get ends of input and add together for size
* @s1: input one to concat
* @s2: input two to concat
* Return: concat of s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
int len1 = 0;
int len2 = 0;
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
char *concatenated = (char *)malloc(len1 + len2 + 1);
if (concatenated == NULL)
return (NULL);
for (int i = 0; i < len1; i++)
concatenated[i] = s1[i];
for (int i = 0; i < len2; i++)
concatenated[len1 + i] = s2[i];
concatenated[len1 + len2] = '\0';
return (concatenated);
}
