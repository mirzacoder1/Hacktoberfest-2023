#include "Tree.h"
void insert(struct Node *t, int key)
{
    struct Node *r = NULL, *p = NULL;
    if (t == NULL)
    {
        p = (struct Node *)malloc(sizeof(struct Node));
        p->data = key;
        p->rchild = p->lchild = NULL;
    }
    else
    {
        while (t)
        {
            r = t;
            if (t->data == key)
                return;
            else if (t->data < key)
                t = t->lchild;
            else
                t = t->rchild;
        }
        p = (struct Node *)malloc(sizeof(struct Node));
        p->data = key;
        p->lchild = p->rchild = NULL;
        if (p->data < r->data)
            r->lchild = p;
        else
            r->rchild = p;
    }
}
int main()
{
    Treecreate();
    Inorder(root);
    return 0;
}