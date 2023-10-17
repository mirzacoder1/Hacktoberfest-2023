#include <stdio.h>
int main()

     {
    //     label:
    //     printf("Hello world\n");
    //     goto end;
    //     printf("We are in the code\n");

    //     goto label;
    //     end:
    //     printf("We are at end\n");
    
    
    int num;    
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        // for (int j = 0; j < 10; j++)
        {
            printf("Enter a number.Exit when 0 is enter\n");
            scanf("%d", &num);
            if(num==0){
                goto end;
            }
    
        }
    }
        end:
        return 0;
    
    
         }