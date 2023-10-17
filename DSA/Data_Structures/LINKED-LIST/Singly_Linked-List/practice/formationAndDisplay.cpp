/* C-PROGRAM TO CREATE LINKED-LIST */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
} *first = nullptr, *temp, *last;

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
        cout << p->next << "-->> " << p->data << endl;
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
int main()
{
    struct Node *temp;
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2, 123};
    int size = sizeof(A) / sizeof(int);
    create(A, size);
    Display(first);

    delete[] first;
    delete[] temp;
    delete[] last;
    return 0;
}

/* CPP PROGRAM TO CREATE LINKED-LIST */

/*
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{

    int A[] = {3, 5, 7, 10, 15};

    Node *head = new Node;

    Node *temp;
    Node *last;

    head->data = A[0];
    head->next = nullptr;
    last = head;

    // Create a Linked List
    for (int i = 1; i < sizeof(A) / sizeof(A[0]); i++)
    {

        // Create a temporary Node
        temp = new Node;

        // Populate temporary Node
        temp->data = A[i];
        temp->next = nullptr;

        // last's next is pointing to temp
        last->next = temp;
        last = temp;
    }

    // Display Linked List
    Node *p = head;

    while (p != nullptr)
    {
        cout << p->data << " -> " << flush;
        p = p->next;
    }

    return 0;
} */