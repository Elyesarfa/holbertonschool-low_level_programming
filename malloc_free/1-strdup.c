#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup - duplicate to new memory space location
* @str: char
* Return: 0
*/
char *_strdup(char *str)
{
if (str == NULL)
return (NULL);
int len = 0;
while (str[len] != '\0')
len++;
char *duplicate = (char *)malloc(sizeof(char) * (len + 1));
if (duplicate == NULL)
return (NULL);
for (int i = 0; i <= len; i++)
duplicate[i] = str[i];
return (duplicate);
}
