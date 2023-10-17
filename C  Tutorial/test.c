#include <stdio.h>
void fib(int n)
{
    int temp, a = 0, b = 1;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a);
        temp = b;
        b = b + a;
        a = temp;
    }
}
int main()
{
    int n;
    printf("Enter the index No.\n");
    scanf("%d", &n);
    fib(n);
    printf("\n");
    fib(23);
    return 0;
}