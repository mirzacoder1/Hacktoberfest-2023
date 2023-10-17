#include <stdio.h>
void insertionSort(int a[], int n)
{
   int i,j=0,x=0;
   for (int i =1; i < n; i++)
   {
      j=i-1;
      x=a[i];
      while(j>-1 && a[j]>x)
      {
         a[j+1]=a[j];
         j--;
      }
      a[j+1]=x;
   }
   
}
int main()
{
   int a[] = {1, 2, 3, 4, 8};
   insertionSort(a, 5);
   for (int i = 0; i < 5; i++)
      printf("%d ", a[i]);

   return 0;
}
