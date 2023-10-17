#include <stdio.h>
int main()
{
    int a, b, c, d, e, totalmarks;
    float netpercentage;
    printf("Enter the marks of English,Hindi,Maths,Physics,chemistry\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    // printf("Enter the marks of Hindi\n");
    // scanf("%d",&b);

    // printf("Enter the marks of Maths\n");
    // scanf("%d",&c);

    // printf("Enter the marks of Physics\n");
    // scanf("%d",&d);

    // printf("Enter the marks of chemistry\n");
    // scanf("%d",&e);

    totalmarks = a + b + c + d + e;
    printf("The total marks of the Rahul is %d\n", totalmarks);

    netpercentage = (totalmarks * 100.00) / 500.00;
    printf("The total percentage of the Rahul is %f\n", netpercentage);

    return 0;
}