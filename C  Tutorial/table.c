#include <stdio.h>
int main()
{
    int a, b = 1;

    printf("Enter number\n");
    scanf("%d", &a);

    // for (b = 1; b <= 10; b++)
    // {
    //     printf("%d x %d = %d\n", a, b, a * b);
    // }

    do
    {
        printf("%d x %d = %d\n", a, b, a * b);
        b++;
    } while (b <= 10);

    return 0;
}
