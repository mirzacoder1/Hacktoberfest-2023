#include <stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct node *next;
};

void Insert(struct Node** p, int value)
{
        struct Node *temp = (struct Node **)malloc(sizeof(struct Node *));
        temp->data = value;
        temp->next = NULL;
    if (*p == NULL)
        p[value] = temp;
    else
    {
        struct Node* q  = p[value];
        while (q->next!= NULL){
            q = q->next;
        }
        q->next = temp;
    }
}

int Delete(struct Node** p, int value){
    struct Node* temp = p[value];
    p[value] = p[value]->next;
    int x = temp->data;
    free(temp);
    return x;
}

int findMax(int a[], int n)
{
    int max = -3246;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

void bucketSort(int a[], int n)
{
    int max, i, j;
    max = findMax(a, n);

    struct Node **Bins = (struct Node**)malloc(sizeof(struct Node) * (max + 1));

    for (i = 0; i < max + 1; i++)
        Bins[i] = NULL;

    for (i = 0; i < n; i++)
    {
        Insert(Bins, a[i]);
    }

    i = 0;
    j = 0;
    while (i < max + 1)
    {
        while (Bins[i] != NULL)
        {
            a[j++] = Delete (Bins,i);
        }
        i++;
    }
}

int main()
{
    int a[] = {2, 1, 3, 4, 6, 4, 5, 7, 5, 4, 8};

    bucketSort(a, sizeof(a) / sizeof(int));

    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
        printf("%d ", a[i]);

    return 0;
}
