#include <stdio.h>
#include <stdlib.h>
struct Element
{
    int i;
    int j;
    int x;
};
struct sparces
{
    int m;
    int n;
    int num;
    struct Element *ele;
};

void create(struct sparces *s)
{
    printf("Enter The No. of Rows and & no. of Columns:\n");
    scanf("%d%d", &s->m, &s->n);
    printf("Enter The No. of Non-zero Elements\n");
    scanf("%d", &s->num);

    s->ele=(struct Element*)malloc(s->num * sizeof(struct Element));

    printf("Enter the value and position to the elements:\n");
    int i;
    for (i = 0; i < s->num; i++)
    {
        printf("Enter the value of %dth Element: ", i + 1);
        scanf("%d%d%d", &s->ele[i].i, &s->ele[i].j, &s->ele[i].x);
    }

    int k = 0, j;
    for (i = 0; i < s->m; i++)
    {
        for (j = 0; j < s->n; j++)
        {
            if (i == s->ele[k].i && j == s->ele[k].j)
                printf("%d ", s->ele[k++].x);
            else
                printf("0 ");
        }
        printf("\n");
    }
}
int main()
{
    struct sparces s;
    create(&s);
    return 0;
}