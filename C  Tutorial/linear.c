#include<stdio.h>
int main()
{
    float x1,y1,x2,y2,x3,y3;
    label:
    printf("Enter value of (x1,y1),(x2,y2),(x3,y3)\n");
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    if ((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)==(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1))
    {
        printf("All points are colinear\n");
    }
    else
    {
        printf("Points are non collinear\n");
    }
    goto label;
    return 0;
}