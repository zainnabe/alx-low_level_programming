#include "main.h"

/**
* _strlen - Returns the length of a string
* @s: string
* Return: length
*/
int _strlen(char *s)
{
int long = 0;
while (*s != '\0')
{
long++;
s++;
}
return (long);
}
