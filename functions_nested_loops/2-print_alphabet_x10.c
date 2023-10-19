#include "main.h"
/**
* print_alphabet_x10 - prints the alphabet in lowercase ten times, followed by a new line
*/
void print_alphabet_x10(void)
{
int i, j;
char ch;
for (j = 0; j < 10; j++)
{
ch = 'a';
for (i = 0; i < 26; i++)
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
}
