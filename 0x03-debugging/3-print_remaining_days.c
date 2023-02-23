/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int day_count = 0;

if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
{
days_in_month[2] = 29;
}

for (int i = 1; i < month; i++)
{
day_count += days_in_month[i];
}
day_count += day;

if (month > 12 || day > days_in_month[month])
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
}
else if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
{
printf("Day of the year: %d\n", day_count);
printf("Remaining days: %d\n", 366 - day_count);
}
else
{
printf("Day of the year: %d\n", day_count);
printf("Remaining days: %d\n", 365 - day_count);
}
}
