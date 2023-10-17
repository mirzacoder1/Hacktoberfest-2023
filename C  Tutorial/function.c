#include <stdio.h>
int sum(int a, int b)
{
  return a+b;
}

 void printstar(int n)
 { for (int i = 0; i < n; i++)
 {
     printf("%c",'*');
 }
     
 }

    int main()
    {
    int a, b, c;
    lable:
        printf("Enter number a\n");
        scanf("%d",&a);

        printf("Enter number b\n");
        scanf("%d",&b);

         c = sum(a , b);
        printf("The sum is %d\n",c);        
        //printstar(2);
        goto lable;
        return (a+b);
    }
