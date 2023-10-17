#include<stdio.h>
int main()
{
    int x,x1,y,y1,r,S;
    x=2,y=3;
    printf("Enter the value of x1,y1,r\n");
    scanf("%d %d %d",&x1,&y1,&r);
    S=((x-x1)*(x-x1)+(y-y1)*(y-y1))-r*r;
    if (S>0)
    {
        printf("The point is outside the circle\n");
    }
    else if (S<0)
    {
        printf("The point is inside the circle\n");
    }
    else
    {
        printf("The point is on the circle");
    }
    
    return 0;
}