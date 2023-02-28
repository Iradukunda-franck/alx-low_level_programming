#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random valid password for 101-crackme
 *
 * Return: 0 on success
 */
int main(void)
{
int i, sum, diff;
char password[84];

srand(time(0));

for (i = 0, sum = 0; sum < (2772 - 122); i++)
{
password[i] = (rand() % 94) + 33;
sum += password[i];
}

password[i] = '\0';
diff = 2772 - sum;
password[i - 1] += diff;

printf("%s", password);
return (0);
}
