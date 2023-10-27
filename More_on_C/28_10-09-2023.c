// Balanced brackets

#include <stdio.h>
#include <stdbool.h>
#include<stdlib.h>
// Structure to represent a stack
struct Stack
{
    char data;
    struct Stack *next;
};

// Function to create a new stack node
struct Stack *createStackNode(char data)
{
    struct Stack *newNode = (struct Stack *)malloc(sizeof(struct Stack));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to push a character onto the stack
void push(struct Stack **top, char data)
{
    struct Stack *newNode = createStackNode(data);
    newNode->next = *top;
    *top = newNode;
}

// Function to pop a character from the stack
char pop(struct Stack **top)
{
    if (*top == NULL)
        return '\0';
    struct Stack *temp = *top;
    char popped = temp->data;
    *top = temp->next;
    free(temp);
    return popped;
}

// Function to check if brackets are balanced
bool areBracketsBalanced(char *expression)
{
    struct Stack *stack = NULL;
    char c;

    for (int i = 0; expression[i]; i++)
    {
        if (expression[i] == '(' || expression[i] == '{' || expression[i] == '[')
        {
            push(&stack, expression[i]);
        }
        else if (expression[i] == ')' || expression[i] == '}' || expression[i] == ']')
        {
            if (stack == NULL)
            {
                return false; // Closing bracket with no matching opening bracket
            }
            c = pop(&stack);
            if ((c == '(' && expression[i] != ')') ||
                (c == '{' && expression[i] != '}') ||
                (c == '[' && expression[i] != ']'))
            {
                return false; // Mismatched opening and closing brackets
            }
        }
    }

    return (stack == NULL); // Stack should be empty for balanced brackets
}

int main()
{
    char expression[100];
    printf("Enter an expression with brackets: ");
    scanf("%s", expression);

    if (areBracketsBalanced(expression))
    {
        printf("Brackets are balanced.\n");
    }
    else
    {
        printf("Brackets are not balanced.\n");
    }

    return 0;
}
