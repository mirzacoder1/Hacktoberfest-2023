#include <stdio.h>
void arrayRev(int arr[])
{
    int term;
    for (int i = 0; i < 7 / 2; i++)
    {
        term = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = term;
    }
}
void arrPrint(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("The value of %d after reversal is %d\n", i, arr[i]);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    printf("Before the reversal\n");
    arrPrint(arr);
    arrayRev(arr);
    printf("\nAfter the reversal of array\n");
    arrPrint(arr);
    return 0;
}