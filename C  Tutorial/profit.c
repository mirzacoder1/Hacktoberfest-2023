#include <stdio.h>
int main()
{
    float profit, sp, cp;
label:
    printf("Enter the selling price and profit for all 15 items:\n");
    scanf("%f%f", &sp, &profit);

    cp = (sp - profit) / 15.00;
    printf("The cost price of an item is %f\n", cp);
    goto label;
    return 0;
}