#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    printf("The file name is %s\n",__FILE__);
    printf("The Date is %s\n",__DATE__);
    printf("The time is %s\n",__TIME__);
    printf("The line no. %d\n",__LINE__);
    
    return 0;
}