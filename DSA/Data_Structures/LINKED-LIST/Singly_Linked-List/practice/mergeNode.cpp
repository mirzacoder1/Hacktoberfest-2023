#include <iostream>
using namespace std;
#include "linked_list.h"
void Merge(Node *p, Node *q)
{
    Node *third = NULL;
    if (p->data < q->data)
    {
        last = third = p;
        p = p->next;
        last->next = NULL;
    }
    else
    {
        last = third = q;
        q = q->next;
        last->next = NULL;
    }
    while (p && q)
    {
        if (p->data < q->data)
        {
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
        else
        {
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }
    p != NULL ? last->next = p : last->next = q;
}
int main()
{
    int a[] = {1, 2,4,6,8,10};
    int size = sizeof(a) / sizeof(int);
    create(a, size);
    int b[] = {3,5,7,9};
    size = sizeof(b) / sizeof(int);
    CREATE(b, size);
    Merge(first, second);
    Display(first);
    return 0;
}