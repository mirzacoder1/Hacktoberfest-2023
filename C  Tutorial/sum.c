#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a,n,n1,n2,n3,n4,n5,n6;
    printf("Enter no. a:\n");
    scanf("%d",&a);
    n1=(a/100000);
    n2=((a-(n1*100000))/10000);
    n3=((a-(n1*100000)-(n2*10000))/1000);
    n4=((a-(n1*100000)-(n2*10000)-(n3*1000))/100);
    n5=((a-(n1*100000)-(n2*10000)-(n3*1000)-(n4*100)))/10;
    n6=(a-(n1*100000)-(n2*10000)-(n3*1000)-(n4*100)-(n5*10));
    n=n1+n2+n3+n4+n5+n6;
    printf("%d",n);
    return 0;
}