#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} * Head, *temp, *last;
;
void create(int A[], int n)
{
    int i = 0;
    Head = (struct Node *)malloc(sizeof(struct Node));
    Head->data = A[i];
    Head->next = Head;
    last = Head;

    for (i = 1; i < n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = A[i];
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
}
void Display(struct Node *h)
{
    do
    {
        printf("%d ", h->data);
        h = h->next;
    } while (h != Head);
    printf(" ");
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 65, 1};
    int size = sizeof(a) / sizeof(int);
    create(a, size);
    Display(Head);
    return 0;
}
