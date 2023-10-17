#include <stdio.h>
#include <stdlib.h>
struct Stack
{
    int size;
    int top;
    int *S;
};
void create(Stack *st,int value)
{
    st->size=value;
    st->top = -1;
    st->S = (int *)malloc(st->size * sizeof(int));
}
void Display(Stack st)
{
    int i;
    for (i = st.top; i >= 0; i--)
        printf("%d ", st.S[i]);
    printf("\n");
}
void push(Stack *st, int x)
{
    if (st->top == st->size - 1)
        printf("Stack overflow\n");
    else 
    {
        st->top++;
        st->S[st->top] = x;
    }
}
int pop(Stack *st)
{
    int x = -1;

    if (st->top == -1)
        printf("Stack Underflow\n");
    else
    {
        x = st->S[st->top--];
    }
    return x;
}
int peek(Stack st, int index)
{
    int x = -1;
    if (st.top - index + 1 < 0)
        printf("Invalid Index \n");
    x = st.S[st.top - index + 1];

    return x;
}
int isEmpty(Stack st)
{
    if (st.top == -1)
        return 1;
    return 0;
}
int isFull(Stack st)
{
    return st.top == st.size - 1;
}
int stackTop(Stack st)
{
    if (!isEmpty(st))
        return st.S[st.top];
    return -1;
}
int main()
{
    Stack st;
    create(&st,7);

    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    pop(&st);
    push(&st, 40);

    printf("%d \n", peek(st, 2));

    Display(st);

    return 0;
}