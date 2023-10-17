/* linear-Searching In The Linked-list */

#include <iostream>
using namespace std;
#include "linked_list.h"
Node *linearSearch(Node *p, int value)
{
    while (p)
    {
        if (p->data == value)
            return p;
        p = p->next;
    }
    return NULL;
}

Node *recursiveLinearSearch(Node *p, int value)
{
    return (p) ? (p->data == value) ? p : recursiveLinearSearch(p->next, value) : NULL;
    /*     if (p)
        {
            if (p->data == value)
                return p;
            else
                return recursiveLinearSearch(p->next, value);
        }
        else
            return NULL; */
}


/* Updated Searching of Linked-list */

Node *updatedList(Node *p, int value)
{
    Node *q = NULL;
    while (p)
    {
        if (p->data == value)
       {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        else
        {
            q = p;
            p = p->next;
        }
    }
    return NULL;
}

int main()
{
    int a[] = {1, 2, 3, 5, 4, 6};
    int size = sizeof(a) / sizeof(int);
    create(a, size);
    Display(first);
    cout <<endl<< linearSearch(first, 4) << " " << updatedList(first, 4) << " " << recursiveLinearSearch(first, 3) <<endl;
    Display(first);
    return 0;
}