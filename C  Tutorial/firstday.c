#include <stdio.h>
int main()
{
    int year, days, total_years, leap_years, nonleap_year;

    printf("Enter the year you want the irst day of:\n");
    scanf("%d", &year);

    year > 2001 ? (total_years = year - 2001) : (total_years = 2001 - year);

    leap_years = total_years / 4;

    days = total_years + leap_years;

    int r = days % 7;
    if (r == 0)
    {
        printf("The first day is Monday\n");
    }
    else if (r == 1)
    {
        printf("The first day is Tuesday\n");
    }
    else if (r == 2)
    {
        printf("The first day is Wednesday\n");
    }
    else if (r == 3)
    {
        printf("The first day is Thursday\n");
    }
    else if (r == 4)
    {
        printf("The first day is Friday\n");
    }
    else if (r == 5)
    {
        printf("The first day is Saturday\n");
    }
    else
    {
        printf("The first day is Sunday\n");
    }
    return 0;
}