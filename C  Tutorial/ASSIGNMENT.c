/*#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 int main()1    A
{
    int a[] = {1, 0, 0, 1, 1, 1, 0, 0, 2, 2, 0, 2};
    int size = sizeof(a) / sizeof(int);

    int x = 0, y = 0, z = size - 1;

    while (x <= z)
    {
        if (a[x]==1)
        {
            x++;
        }
        else if (a[x]==0)
        {
            swap(&a[x],&a[y]);
            x++;
            y++;
        }
        else
        {
            swap(&a[x],&a[z]);
            z--;
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
} */

/* #include<stdio.h>

int main()
{
    int a[]={1,2,4,5,6,7};
    int size=sizeof(a)/sizeof(int);
    int sum=0,answer=0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    // printf("%d",sum);

    answer = (((size + 1) * (size + 2)) / 2)-sum;
    printf("%d ",answer);

    return 0;
} */

/* #include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 8}, b[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(b) / sizeof(int);
    int x=0,y=0,result=0;
    for (int i = 0; i < size; i++)
    {
        x^=a[i];
        y^=b[i];
    }
    printf("%d ",x^y);

    return 0;
} */

/* #include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a[]={1,0,1,0,1,0,0,1,0,1};
    int size = sizeof(a)/sizeof(int);
    int x=0,y=0,z=size-1;
    while (x<=z)
    {
        if(a[x]==1)
        {
            x++;
        }
        else if (a[x]==0)
        {
            swap(&a[x],&a[y]);
            x++;
            y++;
        }
        else
        {
            swap(&a[x],&a[z]);
            z--;
        }

    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
} */

/* #include <stdio.h>
int iterativeBinarySearch(int array[], int start_index, int end_index, int element){
   while (start_index <= end_index){
      int middle = start_index + (end_index- start_index )/2;
      if (array[middle] == element)
         return middle;
      if (array[middle] < element)
         start_index = middle + 1;
      else
         end_index = middle - 1;
   }
   return -1;
}
int main(void){
   int array[] = {1, 4, 7, 9, 16, 56, 70};
   int n = 7;
   int element = 16;
   int found_index = iterativeBinarySearch(array, 0, n-1, element);
   if(found_index == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d",found_index);
   }
   return 0;
} */

/* #include <stdio.h>
int repeatingElement(int arr[], int N)
{
    int M = 0, sum = 0;
    for (int i = 0; i < N; i++)
    {

        sum += arr[i];

        M = max(M, arr[i]);
    }

    int sum1 = M * (M + 1) / 2;

    int ans = (sum - sum1) / (N - M);
    return ans;
}
int main()
{
    // Input
    int arr[] = {2, 6, 4, 3, 1, 5, 2};
    int N = sizeof(arr) / sizeof(arr[0]);
    int answer = repeatingElement(arr, N);
    printf("%d ", answer);
    return 0;
} */