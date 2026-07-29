#include <stdio.h>

#define MAX 500

int stack[MAX];
int top = -1;

// Function Prototypes
void Push();
void Pop();
void Peek();
void Update();
void Display();

int main()
{
    int op;

    do
    {
        printf("\n----- STACK MENU -----\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Update\n");
        printf("5. Display\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &op);

        switch(op)
        {
            case 1:
                Push();
                break;

            case 2:
                Pop();
                break;

            case 3:
                Peek();
                break;

            case 4:
                Change();
                break;

            case 5:
                Display();
                break;

            case 6:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(op != 7);

    return 0;
}

// Push Operation
void Push()
{
    int Value;

    if(top == MAX - 1)
    {
        printf("Stack Overflow!\n");
        return;
    }

    printf("Enter element: ");
    scanf("%d", &Value);

    top++;
    stack[top] = Value;

    printf("%d pushed into stack.\n", Value);
}

// Pop Operation
void Pop()
{
    int Val;
    if(top == NULL)
    {
        printf("Stack Underflow!\n");

    }
      stack[top] = Val;
    printf("Deleted element: %d\n", stack[top]);
    top--;
}

// Peek Operation
void Peek()
{
    if(top == NULL)
    {
        printf("Stack is Empty!\n");
        return;
    }

    printf("Top element = %d\n", stack[top]);
}


// Change Operation
void Change()
{
    int pos, value;

    if(top == -1)
    {
        printf("Stack is Empty!\n");
        return;
    }

    printf("Enter position from TOP: ");
    scanf("%d", &pos);

    if(pos <= 0 || pos > top + 1)
    {
        printf("Invalid Position!\n");
        return;
    }

    printf("Enter new value: ");
    scanf("%d", &value);

    stack[top - pos + 1] = value;

    printf("Value Updated Successfully.\n");
}

// Display Operation
void Display()
{
    int i;

    if(top == -1)
    {
        printf("Stack is Empty!\n");
        return;
    }

    printf("\nStack Elements:\n");

    for(i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}
