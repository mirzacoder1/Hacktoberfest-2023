#include<stdio.h>
void Swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selectionSort(int a[],int n)
{
    int i,j=0,k=0;
    for(i=0;i<n-1;i++)
    {
        j=k=i;
        while(j<n)
        {
            if(a[j]<a[k])
                k=j;
            j++;
        }
        Swap(&a[i],&a[k]);
    }
}
int main()
{
   int a[]={8,1,2,5,4};
   selectionSort(a,5);
   for(int i=0;i<5;i++)
        printf("%d ",a[i]);
   return 0;
}
