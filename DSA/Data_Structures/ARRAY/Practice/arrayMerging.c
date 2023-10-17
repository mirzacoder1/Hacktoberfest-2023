#include <stdio.h>
#include <stdlib.h>
struct Array
{
    int a[10];
    int size;
    int length;
};

struct Array *arrayMerge(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;

    struct Array *arr3 = ( struct Array *)malloc(sizeof(struct Array));
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->a[i] < arr2->a[j])
        {
            arr3->a[k++] = arr1->a[i++];
        }
        else
        {
            arr3->a[k++] = arr2->a[j++];
        }
    }

    for (; i < arr1->length; i++)
        arr3->a[k++] = arr1->a[i];

    for (; j < arr2->length; j++)
        arr3->a[k++] = arr2->a[j];

    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;

    return arr3;
    free(arr3);
}
void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.a[i]);
}
int main()
{
    struct Array arr1 = {{2, 6, 10, 15, 26}, 10, 5};
    struct Array arr2 = {{3, 4, 7, 18, 20}, 10, 5};
    struct Array *arr3;
    arr3 = arrayMerge(&arr1, &arr2);
    Display(*arr3);
    return 0;
}