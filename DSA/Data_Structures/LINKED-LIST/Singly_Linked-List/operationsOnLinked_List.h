#include <iostream>
using namespace std;
#include <stdlib.h>
#define MIN_INT -32768
#define MAX_INT 32767
struct Node
{
    int data;
    Node *next;
} *first = nullptr, *temp, *last, *second = NULL;
void create(int A[], int n)
{
    int i;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void Display(struct Node *p)
{
    while (p != NULL)
    {
        cout << " " << p->data;
        p = p->next;
    }
}

void RDisplay(struct Node *p)
{
    if (p != NULL)
    {
        RDisplay(p->next);
        printf("%d ", p->data);
    }
}

int count(struct Node *p)
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
    Node *t;
    int i;
    if (index < 0 || index > count(p))
        return;
    t = new Node;
    t->data = x;

    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
            p = p->next;
        t->next = p->next;
        p->next = t;
    }
}

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

int Sum(Node *p)
{
    int sum = 0;
    while (p)
    {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}

int recursiveSum(Node *p)
{
    if (p)
    {
        return recursiveSum(p->next) + p->data;
    }
    else
    {
        return 0;
    }
}

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
}

void insertElement(Node *p, int value)
{
    Node *q = NULL;
    while (p && p->data < value)
    {
        q = p;
        p = p->next;
    }
    temp = new Node;
    temp->data = value;
    temp->next = q->next;
    q->next = temp;
}

int Delete(Node *p, int index)
{
    Node *q = NULL;
    int x = -1, i;

    if (index < 1 || index > count(p))
        return -1;
    if (index == 1)
    {
        q = first;
        x = first->data;
        first = first->next;
        free(q);
        return x;
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
        return x;
    }
}

void reverseLink(Node *p)
{
    Node *q = NULL;
    Node *r = NULL;
    p = first;
    while (p)
    {
        /* The Code written from 12 to 15 is the code for Sliding Pointers */
        r = q;
        q = p;
        p = p->next;
        q->next = r; /* Main line to reverse the link of the linked_list */
    }
    first = q;
}

void recursiveReverseLink(Node *q, Node *p)
{
    if (p)
    {
        recursiveReverseLink(p, p->next);
        p->next = q;
    }
    else
        first = q;
}

void reverseElement(Node *p)
{
    int i = 0, a[123];
    p = first;
    while (p)
    {
        a[i] = p->data;
        p = p->next;
        i++;
    }
    p = first, i--;
    while (p)
    {
        p->data = a[i--];
        p = p->next;
    }
}

void append(Node *p, Node *q)
{
    while (p->next != NULL)
        p = p->next;
    p->next = second;
}

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
        return 1;
    return 0;
}

int isSorted(struct Node *p)
{
    int x = -65536;

    while (p != NULL)
    {
        if (p->data < x)
            return 0;
        x = p->data;
        p = p->next;
    }
    return 1;
}

void lastInsert(int x)
{
    temp = new Node;
    temp->data = x;
    temp->next = NULL;
    if (first == NULL)
        first = last = temp;
    else
    {
        last->next = temp;
        last = temp;
    }
}