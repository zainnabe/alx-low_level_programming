#include <stdio.h>
#include <stdlib.h>

/**
* main - A program that prints the digit numbers fro 0 to 10
* Return: 0 (Success)
*/
int main(void)
{
int a;
a = 0;
while (a <= 10)
{
a++;
putchar(a);
}
putchar('\n');
return (0);
}
