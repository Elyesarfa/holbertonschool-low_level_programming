#include <stdio.h>
/**
* main - Entry point of the program
*
* Return: Always 0 (success)
*/
int main(void)
{
char alphabet = 'a';
char ALPHABET = 'A';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
while (ALPHABET <= 'Z')
{
putchar(ALPHABET);
ALPHABET++;
}
putchar('\n');
return (0);
}
