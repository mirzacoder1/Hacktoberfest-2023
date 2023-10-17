#include <stdio.h>
void insertElement(int a[], int length, int value)
{
    int i=length-1;
    while (a[i]>value)
    {
        a[i+1]=a[i];
        i--;
    }
    a[i+1]=value;

    length++;
    for (int i = 0; i < length; i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int a[] = {10,12,14,15,19};
    int size = sizeof(a) / sizeof(int);
    insertElement(a, size, 17);
    return 0;
}