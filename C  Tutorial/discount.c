#include <stdio.h>
int main()
{
    int quantity, price, discount, expences;
    label:
    printf("Enter number of items you purchase\n");
    scanf("%d", &quantity);

    printf("The price per item is\n");
    scanf("%d", &price);

    if (quantity >= 1000)
    {
        printf("You get 10 percent discount\n");

        discount = (quantity * price) / 10;
        expences = (quantity * price) - discount;
        printf("The total expences is %d\n", expences);
    }
    else if (quantity < 1000)
    {
        printf("You awarded nothing\n");
        discount = 0;
        expences = (quantity * price) - discount;
        printf("The total expences is %d\n", expences);
    }
    goto label;
        return 0;
    }