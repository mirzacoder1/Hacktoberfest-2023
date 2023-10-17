#include <stdio.h>
#define MAX_INT 23767
void Swap(int *a, int *b)
{
   int temp = *a;
   *a = *b;
   *b = temp;
}
int Partition(int a[], int l, int h)
{
   int pivot = a[l];
   int i = l, j = h;
   do{do{i++;} while (a[i] <= pivot);do{j--;} while (a[j] > pivot);} while (i < j);
   Swap(&a[l], &a[j]);
   return j;
}

void quickSort(int a[], int l, int h)
{
   int j;
   if (l < h)
   {
      j = Partition(a, l, h);
      quickSort(a, l, j);
      quickSort(a, j + 1, h);
   }
}

int main()
{
   int a[] = {2, 1, 3, 7, 5, 4, MAX_INT};
   quickSort(a, 0, sizeof(a) / sizeof(int));
   for (int i = 0; i < sizeof(a) / sizeof(int) - 1; i++)
      printf("%d ", a[i]);
         // printf("%d ",Partition(a,i,7));
   return 0;
}
