#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void negativePositive(int a[], int length)
{
    int i = 0, j = length - 1;
    while (i < j)
    {
        while (a[i] < 0)
            i++;
        while (a[j] >= 0)
            j--;
        if (i < j)
        {
            swap(&a[i], &a[j]);
        }
    }
}
int main()
{
    int a[] = {1, 2, -3, -1, 6, -5, 12, -23};
    int size = sizeof(a) / sizeof(int);
    negativePositive(a, size);
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);

    return 0;
}