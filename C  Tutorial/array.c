#include <stdio.h>
int main()
{
    int marks[2][4] = {{2, 3, 12, 36}, {4, 9, 144, 1256}};

    //for (int i = 0; i < 4; i++)
    //{
    //    printf("Enter the value of %d of your arrray\n",i);
    //    scanf("%d",&marks[i]);
    //}

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("Enter the value of %d, %d of your arrray is %d\n",i,j,marks[i][j]);
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
