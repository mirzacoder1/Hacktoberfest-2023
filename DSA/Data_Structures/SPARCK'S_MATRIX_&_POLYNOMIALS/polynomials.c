#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct term
{
    int coeff;
    int exp;
};

struct Polynomial
{
    int terms;
    struct term *t;
};

void polynomial(struct Polynomial p)
{
    printf("Enter the No of terms in the polynomial\n");
    scanf("%d", &p.terms);
    printf("Enter the terms for polynomials\n\n");

    p.t = (struct term *)malloc(p.terms * sizeof(struct term));
    for (int i = 0; i < p.terms; i++)
    {
        printf("Enter the value for %dth element: ", i + 1);
        scanf("%d%d", &p.t[i].coeff, &p.t[i].exp);
    }
    printf("The polynomial is given by: ");
    for (int i = 0; i < p.terms; i++)
    {
        printf("%dx%d +",p.t[i].coeff ,p.t[i].exp);
    }
}
int main()
{
    struct Polynomial p;
    polynomial(p);

    return 0;
}