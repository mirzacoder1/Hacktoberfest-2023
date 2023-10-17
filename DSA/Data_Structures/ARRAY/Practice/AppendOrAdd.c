#include<stdio.h>
 void append(int value,int position,int a[])
{
    a[position]=value;
    position++;
    for (int i = 0; i < position; i++)
    {
        printf("%d ",a[i]);
    }
    
}
int main()
{
    int i,a[123],n;
    printf("Give the size of the array\n");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
        scanf("%d",&a[i]);
    int value;
    printf("Give the value You want to enter\n");
    scanf("%d",&value);
    append(value,n,a);
    return 0;
}