/*Q18. Write a C Program to Implement Stack using Array*/

#include <stdio.h>
// macro define
#define SIZE 5
// global declaration
int stack[SIZE];
int tos = -1;
// function declaration
void push();
void pop();
void display();
void peek();
// main starts here
int main()
{
    int ch;
    do
    {
        printf("Press 1 for Push\nPress 2 for Pop\nPress 3 for Peek\nPress 4 for Exit.\n");
        printf("\nEnter Your Choice: ");
        scanf("%d", &ch);
        printf("\n---------------------------------------\n");
        switch (ch)
        {
        case 1:
            push();
            printf("\nStack: ");
            display();
            break;
        case 2:
            pop();
            printf("\nStack: ");
            display();
            break;
        case 3:
            printf("Top of Stack is: ");
            peek();
            break;
        case 4:
            break;
        default:
            printf("\nInvalid Input.\n");
        }

    } while (ch != 4);

    return 0;
}

// push function to insert elements
void push()
{
    int data;
    if (tos < SIZE - 1)
    {
        printf("Enter Elements to insert: ");
        scanf("%d", &data);
        tos++;
        stack[tos] = data;
        if (tos == (SIZE - 1))
            printf("\nStack is FULL");
    }
    else
        printf("\nStack is OVERFLOW");
}

//pop function to delete elements
void pop()
{
    int data;
    if (tos == -1)
        printf("\nStack is UNDERFLOW");
    else
    {
        data = stack[tos];
        printf("%d is DELETED", data);
        tos--;
    }
}

//display stack
void display()
{
    int i;
    if (tos == -1)
        printf("\nStack is Empty");
    else
    {
        for (i = tos; i >= 0; i--)
            printf("%d ", stack[i]);
    }
    printf("\n---------------------------------------\n");
    printf("\n");
}

//display top of stack
void peek()
{
    if (tos == -1)
        printf("\nStack is EMPTY\n");
    else
        printf("%d\n", stack[tos]);
    printf("\n---------------------------------------\n");
    printf("\n");
}