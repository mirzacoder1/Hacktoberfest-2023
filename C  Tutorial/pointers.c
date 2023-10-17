#include<stdio.h>
int main()
{
    int a = 76;
    int *ptr = &a;

    printf("The address of a is %p\n",&a);
    printf("The address of pointer is %p\n",ptr);
    printf("The address of a is %d\n",*ptr);
    printf("The address of a is %d\n",a);
    printf("The address of a is %p\n",&ptr);

    return 0;
}
