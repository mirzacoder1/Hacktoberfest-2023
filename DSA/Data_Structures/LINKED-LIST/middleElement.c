#include <stdio.h>
#include "linked_list.cpp"
void Disolay(struct Node *p)
{
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void midElement(struct Node *p)
{
    struct Node *q = p = first;
    while (q)
    {
        q = q->next;
        if (q)
            q = q->next;
        if (q)
            p = p->next;
    }
    printf("%d ", p->data);
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int size = sizeof(a) / sizeof(int);
    create(a, size);
    midElement(first);
    return 0;
}