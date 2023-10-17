/*  void Insert(struct Array *arr,int index,int x)
 {
 int i;

 if(index>=0 && index <=arr->length)
 {
 for(i=arr->length;i>index;i--)
 arr->A[i]=arr->A[i-1];
 arr->A[index]=x;
 arr->length++;
 }
 }  */

#include <stdio.h>
void insertElement(int a[], int n, int position, int value)
{
    for (int i = n - 1; i >= position - 1; i--)
        a[i + 1] = a[i];
    a[position - 1] = value;
    n++;
    for (int i = 0; i < n; i++)
            printf("%d ",a[i]);
}
int main()
{
    int a[100];
    int position,element,size;
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    scanf("%d",&a[i]);
    printf("Give Your Input\n");
    scanf("%d%d",&position,&element);
    insertElement(a,size,position,element);
    return 0;
}