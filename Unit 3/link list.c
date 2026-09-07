//single linked list..
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data
    struct node *next;
};
struct node *start = null
void create_11();
void display();
void insert_bag();
void insert_end();
void insert_before();
void insert_after();
void delete_beg();
void delete_end();
void delete_node();
void main()
{
    int option
    do
    {



        printf("\n\n ******MAIN MENU*****");
        printf("\n 1: create a list");
        printf("\n 2: display the list");
        printf("\n 3: add a node at the beginning");
        printf("\n 4: add a node at the end");
        printf("\n 5: add a node before the given node");
        printf("\n 6: add a node after  the given node");
        printf("\n 7: delete a node from the beginining");
        printf("\n 8: delete a node from the end");
        printf("\n 9: delete a given node");
        printf("\n 10: EXIT");

        printf("\n\n Enter your option:");
        scanf("%d",&option);

        switch(option)
        {
        case 1:
            create_11():
                printf("\n Linked list created.");
                break;

        case 2:
            display();
            break;

        case 3:
            insert_beg();
            break;

        case 4:
            insert_end();
            break;

        case 5:
            insert_before();
            break;

        case 6:
            insert_after();
            break;

        case 7:
            delete_beg();
            break;

        case 8:
            delete_end();
            break;

        case 9:
            delete_node();
            break;

        default:
             printf("\n Invalid option");
        }

        } while(option != 10);

        return 0;
    }
}

void create_11()
{
    struct node *new_node, *ptr;
    int num;

    printf("\n Enter -1 to end");

    printf("\nEnter the data:");
    scanf("%d",&num);

    while(num != -1)
    {
        new_node = (struct node *)malloc(sizeof(struct node));

        new_node -> data = num;
        new_node -> next = NULL;

        if(start ==NULL)
        {
            start = new_node;
        }
        else
        {
            ptr = start;

            while(ptr -> next != NULL)
            {
                ptr = ptr -> nxt;
            }

            ptr -> next = new_node;
        }

        printf("\n Enter the data:");
        scanf("%d",&num);
    }
}

void display()
{
    struct node * ptr;

    if(start == NULL)
    {
        printf("\n List is empty");
        return;
    }

    ptr = start;

    printf("\n Linked List:");

    while( ptr != NULL)
    {
        printf("%d\t", ptr-> data);
        ptr = ptr -> next;
    }
}


void insert_beg(){
    struct node * new node;
    int num;
    printf("\nEnter the data:");
    scanf("%d",&num);
    new_node = (struct node*) malloc(sizeof(struct node));
    node_node -> data = num;
    new_node -> next = start;
    start = new_node;

}

void insert_end()
{

    struct node*ptr, *new_node;
    int num;
    printf("\Enter the data:");
    scanf("%d",&num);
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node -> data = num;
    new_node -> next = NULL;
    ptr = start;
    while(ptr-> next!= NULL)
        ptr = start;
    while(ptr-> next != NULL)
        ptr = ptr -> next;
    ptr -> next = new_node;

}

void insert_before()
{
    struct node *new_node, *ptr, *preptr;
    int num, val;
    printf("\nEnter the data:");
    scanf("%d",num);
    printf("\nEnter the value before which data has to be inserted:");
    scanf("%d",&val);
    mew_node = (struct node *)malloc(size of(struct node));
    mew_node -> data = num;
    ptr = start;
    while(ptr -> data != val)
    {
        preptr = ptr;
        ptr = ptr -> next;
    }
    preptr -> next = new node;
    new_node -> next = ptr;
}

void insert_after()
{

    struct node * new_node,*ptr, *preptr;
    int num, val;
    printf("\nEnter the data:");
    scanf("%d",&num);
    printf("\nEnter the value which after the data has to be inserted:");
    scanf("%d",&val);
    new_node =(struct node*) malloc(sizeof(struct node));
    new node -> data = num;
    ptr = start;
    preptr = ptr;
    while(preptr -> data != val)
    {
        preptr =ptr;
        ptr = ptr  -> next;
    }
    preptr -> next= new_node;
    new_node -> next = ptr;
}

void delete_beg()
{

    struct node*ptr;
    ptr = start;
    start = start -> next;
    free(ptr);
}

void delete_end()
{
    struct node = *ptr, *preptr;
    ptr = start;
    while(ptr-> next != NULL)
    {
        preptr = ptr;
        ptr = ptr -> next;
    }
    preptr -> next = NULL;
    free(ptr);
}

void delete_node()
{
    struct node * ptr, *preptr;
    int val;
    printf("\n Enter the value of the node which has to be deleted:");
    scanf("%d", &val);
    ptr = start;

    if(ptr -> data == val)
    {
        delete_beg();
    }
    else
    {
        while(ptr-> data!=val)
        {
            preptr = ptr;
            ptr = ptr -> next;
            free(ptr);
        }
    }
}
