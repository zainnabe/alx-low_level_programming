#include <stdio.h>
#include <stdlib.h>

/**
* main - A program that prints the alphabet in lowercase
* Return: 0 (Success)
*/
int main(void)
{
char c;
c = 'a';
while (c <= 'a')
{
if ((c != 'q' && c != 'e') && c <= 'z')
putchar(c);
c++;
}
putchar('\n');
return (0);
}
