#include <stdio.h>
void TraverseArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 4, 3, 6, 8};
    TraverseArray(a, sizeof(a) / sizeof(int));
    return 0;
}