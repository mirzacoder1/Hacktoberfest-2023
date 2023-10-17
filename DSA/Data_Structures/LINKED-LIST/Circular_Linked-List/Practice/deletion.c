#include <stdio.h>
#include <stdlib.h>
#include "circularLinked_list.h"
void Delete(struct Node *p, int index)
{
    int i = 0, x;
    struct Node *q = NULL;
    if (index < 0 || index > count(p))
        return;

    if (index == 0)
    {
        q = Head;
        Head = Head->next;
        last->next = Head;
        x = q->data;
        free(q);
    }
    else
    {
        for (i = 0; i < index - 1; i++)
            p = p->next;
        q = p->next;
        p->next = q->next;
        x = q->data;
        free(q);
    }
}
int main()
{

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(a) / sizeof(int);
    circularCreate(a, size);
    circularDisplay(Head);
    printf("\n");
    Delete(Head, 2);
    circularDisplay(Head);
    printf("\n");
    Delete(Head, 0);
    circularDisplay(Head);
    return 0;
}