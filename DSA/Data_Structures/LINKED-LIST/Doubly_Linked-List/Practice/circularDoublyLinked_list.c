#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
} * head, *temp, *last;

void create(int a[], int n)
{
    int i = 0;
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = a[i];
    head->next = head;
    head->prev = head;
    last = head;

    for (i = 1; i < n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = a[i];
        temp->next = head;
        head->prev = temp;
        last->next = temp;
        temp->prev = last;
        last = temp;
    }
}
int count(struct Node *p)
{
    int c = 0;
    do
    {
        c++;
        p = p->next;
    } while (p != head);
    return c;
}
void insert(int value)
{
    struct Node *p = head, *q = NULL;
    if (head == NULL)
    {

        head = (struct Node *)malloc(sizeof(struct Node));
        head->data = value;
        head->next = head;
        head->prev = head;
        last = head;
    }
    else
    {
        int size = count(p);
        for (int i = 1; i <= size - 1; i++)
            p = p->next;
        q = p->next;
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = value;
        p->next = temp;
        temp->prev = p;
        temp->next = q;
        q->prev = temp;
    }
}

int Delete(int n)
{
    struct Node *p = head, *q = NULL;
    int x = 0;
    if (head == NULL)
        printf("Does not perform delete Operation\n");
    else if (n == 1)
    {
        p = head;
        last->next = head->next;
        head->next->prev = last;
        x = p->data;
        free(p);
        return x;
    }
    else
    {
        for (int i = 1; i < n - 1; i++)
            p=p->next;
        q = p->next;
        p->next = q->next;
        q->next->prev = p;
        x = q->data;
        free(q);
        return x;
    }
    return -1;
}

void Display(struct Node *p)
{
    do
    {
        printf("%d ", p->data);
        p=p->next;
    } while (p != head);
    printf("\n");
}

void revDisplay(struct Node *p)
{
    do
    {
        printf("%d ", p->data);
        p=p->prev;
    } while (p != head);
    printf("\n");
}


int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    create(a, 6);

    Delete(4);
    Display(head);
    Delete(4);
    revDisplay(last);
    Delete(4);
    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
void create(int);
void deletion_last();
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;
void main()
{
    int choice, item;
    do
    {
        printf("1.Append List\n2.Delete Node from last\n3.Exit\n4.Enter your choice?");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the item\n");
            scanf("%d", &item);
            create(item);
            break;
        case 2:
            deletion_last();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("\nPlease Enter valid choice\n");
        }

    } while (choice != 3);
}
void create(int item)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    if (ptr == NULL)
    {
        printf("\nOVERFLOW\n");
    }
    else
    {
        ptr->data = item;
        if (head == NULL)
        {
            head = ptr;
            ptr->next = head;
            ptr->prev = head;
        }
        else
        {
            temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->prev = temp;
            head->prev = ptr;
            ptr->next = head;
        }
    }
    printf("\nNode Inserted\n");
}
void deletion_last()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("\n UNDERFLOW\n");
    }
    else if (head->next == head)
    {
        head = NULL;
        free(head);
        printf("\nNode Deleted\n");
    }
    else
    {
        ptr = head;
        if (ptr->next != head)
        {
            ptr = ptr->next;
        }
        ptr->prev->next = head;
        head->prev = ptr->prev;
        free(ptr);
        printf("\nNode Deleted\n");
    }
} */