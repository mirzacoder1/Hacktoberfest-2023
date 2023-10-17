#include <stdio.h>

int isprime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n1;
    int n2;
    printf("Enter first number\n");
    scanf("%d", &n1);
    printf("Enter second number\n");
    scanf("%d", &n2);
    printf("The prime no. between %d and %d are: ", n1, n2);
    for (int b = n1; b <= n2; b++)
    {
        if (isprime(b))
        {
            printf("%d ", b);
        }
    }

    return 0;
}