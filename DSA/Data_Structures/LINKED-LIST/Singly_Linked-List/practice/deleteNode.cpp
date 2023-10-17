#include <iostream>
using namespace std;
#include "linked_list.h"
void Delete(Node *p, int index)
{
    Node *q = NULL;
    int x = -1, i;

    if (index < 1 || index > Count(p))
        return;
    if (index == 1)
    {
        q = first;
        x = first->data;
        first = first->next;
        free(q);
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        free(p);
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 34, 2};
    int size = sizeof(a) / sizeof(int);
    create(a, size);
    Display(first);
    cout << endl;
    Delete(first, size);
    Display(first);
    return 0;
}