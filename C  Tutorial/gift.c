#include<stdio.h>
int main()
{
    int a;
    printf("Enter your marks\n");

    scanf("%d",&a);
    printf("you have entered %d as your marks\n",a);

    if (a>75)
    {
    printf("You awarded a car!");

    }
    else if (a<75,a>=50)
    { 
     printf("You awarded a bike!");
    }

   else if(a<50,a>=33){
        printf("You rewarded a cycle!");
    }
    else{
        printf("You awarded nothing!");
        }

    return 0;
}
