#include <stdio.h>
#include <stdlib.h>

/**
* main - A program that prints the lowercase alphabet in reverse
* Return: 0 (Success)
*/
int main(void)
{
char c;
c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
