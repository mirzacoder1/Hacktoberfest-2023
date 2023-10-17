#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] <= a[j])
            {
                swap(&a[i], &a[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int a[] = {1, 2, 3, 5, 4, 7, 6, 3};
    int size = sizeof(a) / sizeof(int);
    bubbleSort(a, size);
    return 0;
}