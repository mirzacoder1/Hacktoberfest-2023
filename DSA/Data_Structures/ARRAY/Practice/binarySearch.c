#include <stdio.h>
int binarySearch(int a[], int key, int low, int high)
{
    int middle;
    while (low <= high)
    {
        middle = (low + high) / 2;
        if (a[middle] == key)
        {
            return middle;
        }
        else if (a[middle] > key)
        {
            high = middle - 1;
        }
        else
        {
            low = middle + 1;
        }
    }
    return -1;
}
int recursive_binarySearch(int a[], int key, int low, int high)
{
    int middle;
    if (low <= high)
    {
        middle = (low + high) / 2;
        if (a[middle] == key)
        {
            return middle;
        }

        else if (a[middle] < key)
        {
            return recursive_binarySearch(a, key, middle + 1, high);
        }
        else
        {
            return recursive_binarySearch(a, key, low, middle - 1);
        }
    }
    else
    {
        return -1;
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 12, 13, 16, 67, 78, 89, 111};
    int size = sizeof(a) / sizeof(int);
    printf("%d ",binarySearch(a, 4, 0, size));
    printf("%d ",recursive_binarySearch(a, 4, 0, size));
    return 0;
}