struct Node
{
    Node *prev;
    int data;
    Node *next;
} *Head = NULL, *temp, *last;

void create(int a[], int n)
{
    int i = 0;
    Head = new Node;
    Head->data = a[0];
    Head->prev = NULL;
    Head->next = NULL;
    last = Head;
    for (i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = a[i];
        last->next = temp;
        temp->prev = last;
        temp->next = NULL;
        last = temp;
    }
}
void doubleDisplay(Node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}