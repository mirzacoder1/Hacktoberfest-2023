#include<stdio.h>
void Swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bubbleSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1]) Swap(&a[j],&a[j+1]);
            else continue;
        }
    }
}
int main()
{
   int a[]={1,22,3,23,2,2,21};
   int n=sizeof(a)/sizeof(int);
   bubbleSort(a,n);
   for(int i=0;i<n;i++)
    printf("%d ",a[i]);
   return 0;
}