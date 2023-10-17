/* Write a program to calculate overtime pay of 10 employees. 
Overtime is paid at the rate of Rs. 12.00 per hour for every 
hour worked above 40 hours. Assume that employees do not 
work for fractional part of an hour.*/
#include<stdio.h>
int main()
{
    int a,hours;
    printf("Enter the quantity of hours\n");
    scanf("%d",&hours); 
    
    if (hours<=40)
    {
        printf("There is no overtime payment for workers\n");
    }
    else if (hours>=40)
    {
        a=hours*12*10;
        printf("the amount paid to ten workers is Rs%d\n",a);
    }
    
    
    return 0;
}