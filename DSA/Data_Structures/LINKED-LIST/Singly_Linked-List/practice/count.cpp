#include <iostream>
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

int recursiveCount(struct Node *p)
{
    // static int i=0;
    if (p!=NULL)
    {
        // i++;
        return recursiveCount(p->next)+1;
    }
    else
    {
        return 0;
    }
    
    
}
int main()
{
    int a[] = {2, 3, 4, 5, 6, 7, 12, 23, 2, 2};
    int size = sizeof(a) / sizeof(int);
    create(a, size);
    cout<<Count(first)<<" "<<recursiveCount(first);
    return 0;
}