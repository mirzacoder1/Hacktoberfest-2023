#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n,result,sum = 0;
  printf("enter No.\n");
  scanf(" %d", &n);
  // scanf("%d", &n);
  int arr[n];
  for (int i = 1; i <= n; i++)
  {
    printf("enter no.s\n");
    scanf("%d", &arr[i]);
  }
  for (int i = 1; i <= n; i++)
  {
    sum += arr[i];
          
  }

  printf("The sum is %d", sum);
  return 0;
}
