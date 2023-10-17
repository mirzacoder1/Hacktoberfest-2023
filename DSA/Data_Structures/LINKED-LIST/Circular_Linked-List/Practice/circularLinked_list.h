struct Node
{
    int data;
    struct Node *next;
} * Head, *first = NULL, *temp, *last;

void circularCreate(int A[], int n)
{
    int i = 0;
    Head = (struct Node *)malloc(sizeof(struct Node));
    Head->data = A[i];
    Head->next = Head;
    last = Head;

    for (i = 1; i < n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = A[i];
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
}
void circularDisplay(struct Node *h)
{
    do
    {
        printf(" %d ", h->data);
        h = h->next;
    } while (h != Head);
    printf("\n");
}

void create(int A[], int n)
{
    int i;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        temp =(struct  Node *)malloc(sizeof(struct Node));
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

int count(struct Node *p)
{
    int c = 0;
    int flag = 0;
    do
    {
        c++;
        p = p->next;
    } while (p != Head);
    return c;
}
