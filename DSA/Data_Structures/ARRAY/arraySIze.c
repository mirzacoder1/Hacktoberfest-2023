#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;
    p = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        p[i] = i;
    }
    for (int i = 0; i < 5; i++)
    {
        p[i] = i;
        printf("%d ",p[i]);
    }
    printf("\n");
    p=(int*)realloc(p,7*sizeof(int));
    for (int i = 0; i < 7; i++)
    {
        p[i] = i;
    }
    for (int i = 0; i < 7; i++)
    {
        p[i] = i;
        printf("%d ",p[i]);
    }

    return 0;
}