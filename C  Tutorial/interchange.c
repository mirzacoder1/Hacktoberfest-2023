#include <stdio.h>
int main()
{
    int A, B;

    printf("Enter the value of A and B\n");
    scanf("%d%d", &A, &B);

    A = A + B;
    B = A - B;
    A = A - B;;
    printf("The value of A is %d\n",A);
    printf("The value of B is %d\n", B);
    return 0;
}