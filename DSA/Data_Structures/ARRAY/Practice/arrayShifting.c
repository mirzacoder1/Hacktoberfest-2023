#include <stdio.h>

void leftShift(int a[],int length){
    for (int i = 0; i < length; i++)
    {
        a[i]=a[i+1];
    }
    a[length-1]=0;
    for (int i = 0; i < length; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void rightShift(int a[],int length){
    for (int i = length; i >0; i--)
    {
       a[i]=a[i-1];
    }
    a[0]=0;
    for (int i = 0; i < length; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void circularLeftShift(int a[],int length){
    a[length]=a[0];
    for (int i = 0; i < length; i++)
    {
        a[i]=a[i+1];
    }
    for (int i = 0; i < length; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void circularRightShift(int a[],int length){
    for (int i = length-1; i >0; i--)
    {
       a[i]=a[i-1];
    }
    a[0]=a[length];
    for (int i = 0; i < length; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main(){
    int a[]={1,2,3,4,5,6,7};
    int size=sizeof(a)/sizeof(int);
    leftShift(a,size);
    rightShift(a,size);
    circularLeftShift(a,size);
    circularRightShift(a,size);

return 0;
}