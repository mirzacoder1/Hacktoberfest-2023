#include<stdio.h>
int main()
{
    int a;
    int i,j;
    label:
    printf("Enter number a\n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:

        for ( i = 0; i <= 5; i++)
        {
            for ( j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
            
        }
        
        break;
        
    case 2:
        
        for ( i = 5; i >= 1; i--)
        {
            for ( j = 0; j < i; j++)
            {
                printf("*"); 
            }
            printf("\n");
        }
        
        break;
    
    default:
        break;
    }
    goto label;
    return 0;
}