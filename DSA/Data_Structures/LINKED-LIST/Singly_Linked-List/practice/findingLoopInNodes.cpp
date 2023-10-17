#include <iostream>
using namespace std;
#include "linked_list.h"
int isLoop(Node *f)
{
    Node *p = NULL, *q = NULL;
    p = q = f;
    do
    {
        p = p->next;
        q = q->next;
        q = q ? q->next : q;
    } while (p && q && p != q);
    if (p == q)
        return true;
    return false;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5,6, 7};
    circularCreate(a, 7);
    cout << isLoop(Head)<<" ";
    circularDisplay(Head);
    return 0;
}