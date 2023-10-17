#include <stdio.h>
int isSorted(int a[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        if (a[i] > a[i + 1])
            return 0;
    }
    return 1;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 11};
    int size = sizeof(a) / sizeof(int);
    
    printf("%d ",isSorted(a,size));
    
    
    return 0;
}