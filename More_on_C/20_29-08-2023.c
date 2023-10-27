#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Stack
{
    int items[MAX_SIZE];
    int top;
};

void initialize(struct Stack *stack)
{
    stack->top = -1;
}

int isEmpty(struct Stack *stack)
{
    return stack->top == -1; // Corrected the comparison operator
}

int isFull(struct Stack *stack)
{
    return stack->top == MAX_SIZE - 1;
}

void push(struct Stack *stack, int val)
{
    if (isFull(stack))
    {
        printf("Stack is overflowed\n"); // Added newline character
    }
    else
    {
        stack->top++;
        stack->items[stack->top] = val;
    }
}

int pop(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is underflowed, can not pop..\n"); // Added newline character
        return -1;
    }
    else
    {
        int popitem = stack->items[stack->top];
        stack->top--;
        return popitem;
    }
}

int peek(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is underflowed, can not peek..\n"); // Added newline character
        return -1;
    }
    else
    {
        return stack->items[stack->top];
    }
}

int main()
{
    struct Stack stack;
    initialize(&stack);
    push(&stack, 10);
    push(&stack, 15);
    push(&stack, 20);
    push(&stack, 25);
    printf("TOP element: %d \n", peek(&stack));
    printf("POP element: %d \n", pop(&stack));
    printf("TOP element after pop: %d \n", peek(&stack));

    return 0; // Added a return statement
}

// #include <stdio.h>
// #include <stdlib.h>
// #define MAX_SIZE 100
// struct Stack
// {
//     int items[MAX_SIZE];
//     int top;
// };
// void initialize(struct Stack *stack)
// {
//     stack->top = -1;
// }
// int isEmpty(struct Stack *stack)
// {
//     return stack->top = -1;
// }
// int isFull(struct Stack *stack)
// {
//     return stack->top == MAX_SIZE - 1;
// }
// void push(struct Stack *stack, int val)
// {
//     if (isFull(stack))
//     {
//         printf("Stack is overflowed");
//     }
//     else
//     {
//         stack->top++;
//         stack->items[stack->top] = val;
//     }
// }
// int pop(struct Stack *stack)
// {
//     if (isEmpty(stack))
//     {
//         printf("Stack is underflowed, can not pop..");
//         return -1;
//     }
//     else
//     {
//         int popitem = stack->items[stack->top];
//         stack->top--;
//         return popitem;
//     }
// }
// int peek(struct Stack *stack)
// {
//     if (isEmpty(stack))
//     {
//         printf("Stack is underflowed, can not pop..");
//     }
//     else
//     {
//         return stack->items[stack->top];
//     }
// }
// int main()
// {
//     struct Stack stack;
//     initialize(&stack);
//     push(&stack, 10);
//     push(&stack, 15);
//     push(&stack, 20);
//     push(&stack, 25);
//     printf("TOP element %d \n", peek(&stack));
//     printf("POP element %d \n", pop(&stack));
//     printf("TOP element after pop %d \n", peek(&stack));
// }