#include<stdio.h>
int main()
{
    float a,b,c,d;
    label:
    printf("Enter first angle\n");
    scanf("%f",&a);

    printf("Enter second angle\n");
    scanf("%f",&b);
    
    printf("Enter third angle\n");
    scanf("%f",&c);
    
    d=a+b+c;
    if (d==180)
    {
        printf("The given angles are the angles of triangle\n");
    }
    else
    {
        printf("The given angles are not angles of triangles\n");
    }
    goto label;
    return 0;
}