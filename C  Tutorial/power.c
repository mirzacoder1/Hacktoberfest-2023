/* Two numbers are entered through the keyboard. Write a 
program to find the value of one number raised to the power 
of another. */
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    label:
    printf("Enter the number a and b\n");
    scanf("%d %d",&a,&b);
    int c = pow(a,b);
    printf("The final value is %d\n",c);
    goto label;
    return 0;
}