#include <stdio.h>
#include <stdlib.h>
#include "circularLinked_list.h"
int intersection(struct Node *p)
{
    struct Node *slow, *fast;
    slow = fast = p;
    // If list is empty or has only one node
    // without loop
    if (p == NULL || p->next == NULL)
        return -1;

    // Move slow and fast 1 and 2 steps
    // ap respectively.
    slow = slow->next;
    fast = fast->next->next;
    // Search for loop using slow and
    // fast pointers
    while (fast && fast->next)
    {
        if (slow == fast)
            break;
        slow = slow->next;
        fast = fast->next->next;
    }
    // If loop does not exist
    if (slow != fast)
        return -1;
    // If loop exists. Start slow from
    // p and fast from meeting point.
    else
        return slow->data;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    circularCreate(a, 7);
    create(a,7);
    printf("%d %d ",intersection(Head),intersection(first));
    circularDisplay(Head);
    return 0;
}