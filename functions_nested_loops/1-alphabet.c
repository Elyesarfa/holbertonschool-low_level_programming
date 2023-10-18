#include <stdio.h>
#include "main.h"
/**
* main - Entry point of the program
*
* Return: Always 0 (success)
*/
void print_alphabet(void)
{
char alphabet = 'a';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
