#include <stdio.h>
void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int linearSearch(int a[],int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] == key)
        {
            Swap(&a[0], &a[i]);
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[123];
    int length;
    printf("Enter the length of the array:\n");
    scanf("%d",&length);
    printf("GIve the value to the array elements:\n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int size = sizeof(a) / sizeof(int);
    int key;
    printf("Search for the key:\n");
    scanf("%d",&key);
    printf("%d ",linearSearch(a,size,key));
    return 0;
}