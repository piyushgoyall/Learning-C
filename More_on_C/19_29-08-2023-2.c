// Writa a program using stack to remove middle word from stack

// Sample input
// hello how are

// Sample output
// hello are

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100
struct Stack
{
    char words[MAX_SIZE][50];
    int top;
};
void push(struct Stack *stack, const char *word)
{
    if (stack->top == MAX_SIZE - 1)
    {
        printf("\nStack is Full");
        return;
    }
    stack->top++;
    strcpy(stack->words[stack->top], word);
}
char *pop(struct Stack *stack)
{
    if (stack->top == -1)
    {
        printf("\nStack is Empty");
        return NULL;
    }
    return stack->words[stack->top--];
}
void removeMiddleWord(struct Stack *stack)
{
    int middle = (stack->top + 1) / 2;
    struct Stack tempStack;
    tempStack.top = -1;
    // push words into tempStack until middle is reached
    for (int i = 0; i < middle; i++)
    {
        push(&tempStack, pop(stack));
    }
    // remove middle element
    pop(stack);
    // push result into original stack
    while (tempStack.top != -1)
    {
        push(stack, pop(&tempStack));
    }
}
int main()
{
    struct Stack stack;
    stack.top = -1;
    push(&stack, "Hello");
    push(&stack, "How");
    push(&stack, "Are");
    printf("\nOriginal Stack Values: ");
    for (int i = 0; i <= stack.top; i++)
    {
        printf("%s", stack.words[i]);
    }
    removeMiddleWord(&stack);
    printf("\nAfter Removing Middle Word from Stack Values: ");
    for (int i = 0; i <= stack.top; i++)
    {
        printf("%s", stack.words[i]);
    }
    printf("\n");
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define MAX_SIZE 100

// struct Stack
// {
//     char items[MAX_SIZE][50]; // Assuming maximum word length is 50 characters
//     int top;
// };

// void initialize(struct Stack *stack)
// {
//     stack->top = -1;
// }

// int isEmpty(struct Stack *stack)
// {
//     return stack->top == -1;
// }

// int isFull(struct Stack *stack)
// {
//     return stack->top == MAX_SIZE - 1;
// }

// void push(struct Stack *stack, const char *word)
// {
//     if (isFull(stack))
//     {
//         printf("Stack is overflowed\n");
//     }
//     else
//     {
//         stack->top++;
//         strcpy(stack->items[stack->top], word);
//     }
// }

// void pop(struct Stack *stack)
// {
//     if (!isEmpty(stack))
//     {
//         stack->top--;
//     }
// }

// int main()
// {
//     struct Stack stack;
//     initialize(&stack);

//     // Push words onto the stack
//     push(&stack, "hello");
//     push(&stack, "how");
//     push(&stack, "are");

//     int stackSize = stack.top + 1;
//     int middleIndex = stackSize / 2;

//     printf("Original stack:\n");
//     for (int i = 0; i < stackSize; i++)
//     {
//         printf("%s\n", stack.items[i]);
//     }

//     // Remove the middle word
//     pop(&stack);

//     printf("\nStack after removing middle word:\n");
//     for (int i = 0; i < stack.top + 1; i++)
//     {
//         printf("%s\n", stack.items[i]);
//     }

//     return 0;
// }
