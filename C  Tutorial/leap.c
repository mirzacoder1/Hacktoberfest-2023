#include<stdio.h>
int main()
{
    int year;
    label:
    printf("Enter year\n");
    scanf("%d",&year);
    if (year%4==0)
    {
        printf("The given year is a leap year\n");
    }
    else
    {
        printf("The given year is not a leap year\n");
    }
    goto label;
       
    return 0;
}