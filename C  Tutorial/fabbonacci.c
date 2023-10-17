#include <stdio.h>

int fib_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

int fib_iterative(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < n - 1; i++)
    {
        b = a + b;
        a = b - a;
    }

    return a;
}

int main()
{
    int number;
label:

    printf("Enter the value of index to get Febonacci series\n");
    scanf("%d", &number);

    printf("The value of Febonacci number %d using recursive approach is %d\n", number, fib_recursive(number));

    printf("The value of Febonacci number %d using iterative approach is %d\n", number, fib_iterative(number));
    goto label;
    return 0;
}