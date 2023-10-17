#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void arrayRev(int a[], int length)
{
    int b[123];
    for (int i = 0; i < length; i++)
    {
        b[i] = a[i];
    }
    for (int i = 0, j = length - 1; j >= 0; j--, i++)
    {
        a[i] = b[j];
    }
    for (int i = 0; i < length; i++)
    {
        printf("%d ",a[i]);
    }
}

void arraySwapRev(int a[], int length)
{
    for (int i = 0,j=length-1; i<j; i++,j--)
    {
        swap(&a[i],&a[j]);
    }
    for (int i = 0; i < length; i++)
    {
        printf("%d ",a[i]);
    }
    
}
int main()
{
    int a[] = {1, 2, 10, 4, 5, 6, 7, 8, 9};
    int size = sizeof(a) / sizeof(int);
    arraySwapRev(a, size);
    printf("\n");
    arrayRev(a, size);
    return 0;
}