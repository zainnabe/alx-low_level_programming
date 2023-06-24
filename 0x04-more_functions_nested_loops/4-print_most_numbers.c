#include "main.h"

/**
* print_most_numbers - Print the numbers from 0 to 9
* Description: Prints the nilbers excluding 2 and 4
* Return: the numbers from 0 to 9
*/
void print_most_numbers(void)
{
int x = 0;
for (; x <= 9; x++)
{
if (x == 2 || x == 4)
{
continue;
}
else
{
putchar(x + '0');
}
}
putchar('\n');
}
