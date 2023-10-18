#include <stdio.h>
/**
* main - Entry point of the program
*
* Return: Always 0 (success)
*/
int main(void)
{
int num;
char hexChar;
for (num = 0; num <= 15; num++)
{
if (num < 10)
{
hexChar = num + '0';
}
else
{
hexChar = num - 10 + 'a';
}
putchar(hexChar);
}
putchar('\n');
return (0);
}
