/* Notes */

/*
#include<stdio.h>
struct Array
{
 int A[10];
 int size;
 int length;
};
 void Display(struct Array arr)
 {
 int i;
 printf(("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf(("%d ",arr.A[i]);
 }
int Delete(struct Array *arr,int index)
{
 int x=0;
 int i;
 if(index>=0 && index<arr->length)
 {
 x=arr->A[index];
 for(i=index;i<arr->length-1;i++)
 arr->A[i]=arr->A[i+1];
 arr->length--;
 return x;
 }
 return 0;
}
int main()
{
 struct Array arr1={{2,3,4,5,6},10,5};
 printf(("%d",Delete(&arr1,0));
 Display(arr1);
 return 0;
} */

#include <stdio.h>
void deleteElement(int a[], int size, int dltIndex)
{
    int found = 0;
    for (int i = dltIndex; i < size; i++)
    {
        a[i] = a[i + 1];
        found++;
    }
    size--;
    if (found == 0)
        printf("\nElement doesn't found in the Array!");
    else
        printf("\anElement Deleted Successfully!");
    printf("\n");
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
}
int main()
{
    int a[100], size, index;
    scanf("%d", &size);
    printf("Enter %d Array Elements: ",size);
    for (int i = 0; i < size; i++)
       scanf("%d",&a[i]);
    printf("Enter index to Delete: ");
   scanf("%d",&index);
    deleteElement(a, size, index);

    return 0;
}