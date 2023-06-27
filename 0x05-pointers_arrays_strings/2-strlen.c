#include "main.h"

/**
* _strlen - Returns the length of a string
* @s: string
* @l: integer
* Return: length
*/
int _strlen(char *s)
{
int l;
l = 0;
while (*s != '\0')
{
l++;
s++;
}
return (l);
}
