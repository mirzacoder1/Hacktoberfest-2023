#include<iostream>
using namespace std;
#include "linked_list.h"

int Count(struct Node *p)
{
    int c = 0;
    while (p != NULL)
    {
        c++;
        p = p->next;
    }
    return c;
}

void Insert(Node *p, int index, int x)
{
    if (index < 0 || index > Count(p))
        return;
    temp = new Node;

    temp->data = x;
    if (index == 0)
        temp->next = first;
    else
    {
        for (int i = 0; i < index - 1; i++)
            p = p->next;
        temp->next = p->next;
        p->next = temp;
    }
}
using namespace std;
int main()
{
    int a[]={1,2};
    int size=sizeof(a)/sizeof(int);
    create(a,size);
    Display(first);cout<<endl;
    Insert(first,1,45);
    Display(first);
    return 0;
}