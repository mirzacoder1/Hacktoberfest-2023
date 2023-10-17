#include <stdio.h>
int main()
{
    int cash1, cash2, cash3;
    int numofcurrency;
    label:
    // printf("Enter the amount which you need to withdraw from cashier\n");
    // scanf("%d", &amount);
    printf("The number of 100 rupee notes is\n");
    scanf("%d", &cash1);
    printf("The number of 50 rupee notes is\n");
    scanf("%d", &cash2);
    printf("The number of 10 rupee notes is \n");
    scanf("%d", &cash3);
    int totalamount = cash1 * 100 + cash2 * 50 + cash3 * 10;
    numofcurrency=cash1+cash2+cash3;
    printf("Total number of currency notes is %d\n",numofcurrency);
    printf("The total amount is Rs %d\n",totalamount);
    goto label;
    return 0;
}