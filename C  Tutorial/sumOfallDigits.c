#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int SumOf(int n)
{
    int number = n;
    int remainder = number % 10;
    return remainder;
}
int main()
{
    int num, count = 0;
    printf("Give your input.\n");
    scanf("%d", &num);

    while (num != 0)
    {
        int c = SumOf(num);
        count = c + count;
        printf("The remainder is %d\n", c);
        num = num / 10;
    }
        printf("The sum of all digits is %d\n", count);

    return 0;
}