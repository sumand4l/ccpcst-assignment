/*Q19. Write a C Program to Implement a Queue using an Array*/

#include <stdio.h>
// macro define
#define SIZE 5
// global declaration
int queue[SIZE];
int F = -1;
int R = -1;
// function declaration
void insert_q();
void delete_q();
void display_q();
// main starts here
int main()
{
    int ch;
    do
    {
        printf("Press 1 for Insert Element\nPress 2 for Delete Element\nPress 3 for Exit.");
        printf("\nEnter Your Choice: ");
        scanf("%d", &ch);
        printf("\n---------------------------------------\n");
        switch (ch)
        {
        case 1:
            insert_q();
            printf("\nQueue: ");
            display_q();
            break;
        case 2:
            delete_q();
            printf("\nQueue: ");
            display_q();
            break;
        case 3:
            break;
        default:
            printf("\nInvalid Input.\n");
        }

    } while (ch != 3);

    return 0;
}

//insert element in queue
void insert_q()
{
    int data;
    if (R < (SIZE - 1))
    {
        printf("Enter Element to Insert: ");
        scanf("%d", &data);
        R++;
        queue[R] = data;
        if (F == -1)
            F = 0;
    }
    else
        printf("\nQueue is OVERFLOW");
}

//delete element in queue
void delete_q()
{
    int data;
    if (F == -1 && R == -1)
        printf("\nQueue is UNDERFLOW");
    else
    {
        if (F == R)
        {
            data = queue[F];
            printf("\n%d is DELETED", data);
            F = -1;
            R = -1;
        }
        else
        {
            data = queue[F];
            printf("\n%d is DELETED", data);
            F++;
        }
    }
}

//display the queue
void display_q()
{
    int i;
    if (F == -1)
        printf("\nQueue is EMPTY");
    else
    {
        for (i = F; i <= R; i++)
            printf("%d ", queue[i]);
    }
    printf("\n---------------------------------------\n");
}
