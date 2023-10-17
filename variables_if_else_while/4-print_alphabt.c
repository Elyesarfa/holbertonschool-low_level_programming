#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point of the program
*
* Return: Always 0 (success)
*/
int main(void)
{
char alphabet = 'a';
while (alphabet <= 'z')
{
if (alphabet != 'q' && alphabet != 'e')
{
putchar(alphabet);
}
alphabet++;
}
putchar('\n');
return (0);
}
