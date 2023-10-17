#include<stdio.h>
int main()
{
    int a;
    label:
    printf("Enter number a\n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Enter number is odd\n");
    }
    goto label;

    return 0;
}