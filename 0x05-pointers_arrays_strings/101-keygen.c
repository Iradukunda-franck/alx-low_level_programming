#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert a string to an integer
 *
 * @s: string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;

while (*s != '\0')
{
if (*s == '-')
{
sign *= -1;
}
else if (*s >= '0' && *s <= '9')
{
result = result * 10 + (*s - '0') * sign;
if (*(s + 1) < '0' || *(s + 1) > '9')
{
break;
}
}
s++;
}

return (result);
}
