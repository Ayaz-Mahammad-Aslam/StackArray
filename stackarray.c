#include<stdio.h>
#include<stdlib.h>

#define size 10
#define true 1
#define false 0

void push();
void pop();
void display();
int isFull();
int isEmpty();

int top = -1;
int arr[size];

int isFull()
{
    if (top == size - 1)
        return true;
    else
        return false;
}

int isEmpty()
{
    if (top == -1)
        return true;
    else
        return false;
}

void push()
{
    int x;
    if (isFull())
    {
        printf("\n Stack overflow");
    }
    else
    {
        printf("\n Enter the item to push: ");
        scanf("%d", &x);
        top++;
        arr[top] = x;
        printf("\n Item pushed successfully");
    }
}

void pop()
{
    if (isEmpty())
        printf("\n Stack underflow");
    else
    {
        printf("\n Deleted item is %d", arr[top]);
        top--;
    }
}

void display()
{
    int i;
    if (isEmpty())
    {
        printf("\n Stack is empty");
    }
    else
    {
        printf("\n Stack elements are:\n");
        for (i = top; i >= 0; i--)
        {
            printf("%d\n", arr[i]);
        }
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n **** MENU ****");
        printf("\n 1. Push \n 2. Pop \n 3. Display \n 4. Exit");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:push();
            break;

        case 2: pop();
            break;

        case 3: display();
            break;

        case 4: exit(1);
            break;

        default: printf("\n Wrong input");
        }
    }
    return 0;
}