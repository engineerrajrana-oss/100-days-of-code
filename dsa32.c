#include <stdio.h>
#define MAX 30000

int stack[MAX];
int minStack[MAX];
int top = -1;
int minTop = -1;

void push(int val)
{
    stack[++top] = val;

    if (minTop == -1 || val <= minStack[minTop])
    {
        minStack[++minTop] = val;
    }
}

void pop()
{
    if (stack[top] == minStack[minTop])
    {
        minTop--;
    }

    top--;
}

int peek()
{
    return stack[top];
}

int getMin()
{
    return minStack[minTop];
}

int main()
{
    push(-2);
    push(0);
    push(-3);

    printf("Minimum: %d\n", getMin());

    pop();

    printf("Top element: %d\n", peek());
    printf("Minimum: %d\n", getMin());

    return 0;
}