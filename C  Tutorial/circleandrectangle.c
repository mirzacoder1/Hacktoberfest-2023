#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, r;
    int pi = 3.14;
    int Area, Perimeter;
label:
    printf("Enter the value of length and breadth of rectangle in Cms\n");
    scanf("%d %d", &a, &b);

    printf("Enter the value of radius in Cms\n");
    scanf("%d", &r);

    Area = a * b;
    printf("Area of rectangle is %d\n", Area);

    Perimeter = 2 * (a + b);
    printf("Perimeter of rectangle is %d\n", Perimeter);

    float area = pi * pow(r, 2);
    printf("Area of circle is %f\n", area);

    float circumference = 2 * pi * r;
    printf("Circumference of circle is %f\n", circumference);
    goto label;
    return 0;
}