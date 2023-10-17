#include<stdio.h>
void swap(int a,int b){
    printf("a=%d,b=%d\n",a,b);
    int temp=a;
    a=b;
    b=temp;
    printf("a=%d,b=%d\n",a,b);
    
}
int main()
{
    int a=4,b=5;
    swap(a,b);
    return 0;
}