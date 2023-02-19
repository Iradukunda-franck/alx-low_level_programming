#include <stdio>
/**
 * main - Entry point
 * Return: Always 0 (success)
*/
int main(void)
{
char c = 'a';
char newline = '\n';

while (c <= 'z')
{
putchar(c);
c++;
}

putchar(newline);
return (0);
}
