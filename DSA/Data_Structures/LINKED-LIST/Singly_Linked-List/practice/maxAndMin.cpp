#include <iostream>
using namespace std;
#include "linked_list.h"
#define MIN_INT -32768
#define MAX_INT 32767

int Max(Node *p)
{
    int max = MIN_INT;
    while (p)
    {
        if (p->data > max)
            max = p->data;
        p = p->next;
    }
    return max;
}

int recursiveMax(Node *p)
{
    int x = 0;
    if (p == 0)
        return MIN_INT;
    else
    {
        x = recursiveMax(p->next);
        if (x > p->data)
            return x;
        else
            return p->data;
    }
}

int Min(Node *p)
{
    int min = MAX_INT;
    while (p)
    {
        if (p->data < min)
            min = p->data;
        p = p->next;
    }
    return min;
}

int recursiveMin(Node *p)
{
    int x = 0;
    if (!p)
        return MAX_INT;
    else
    {
        x = recursiveMin(p->next);
        return x > p->data ? p->data : x;
    }
}
int main()
{
    int a[] = {-1,0,1, 2, 3, 4, 5, 56, 6, 759, 7560, 234};
    int size = sizeof(a) / sizeof(int);
    create(a, size);
    cout << recursiveMax(first) << " ";
    cout << Max(first)<<" ";
    cout << recursiveMin(first) << " ";
    cout << Min(first);
    return 0;
}