#include "main.h"

/**
* _strcpy -Copy a string
* @des: Destination value
* @src: Source value
* Return: the pointer to dest
*/
char *_strcpy(char *des, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
des[i] = src[i];
}
des[i++] = '\0';
return (dest);
}
