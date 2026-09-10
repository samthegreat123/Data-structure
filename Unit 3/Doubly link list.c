//Doubly link list..

#include<stdio.h>
#include<malloc.h>

struct node
{
    struct node *prev;
    int data;
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

void create_11(){
    struct node * new_node, *ptr;
    int num;
    printf("\nEnter -1 to the end");
    printf("Enter the data:");
    scanf("%d",&num);
    while(num != -1){
        if(start = NULL)
        {
            new_node(struct node*)malloc(sizeof(struct node));
            new_node -> prev = NULL;
            new_node -> data = num;
            new_node -> next = NULL;
            start = new_node;
        }

        else{
            ptr = start;
            new_node = (struct node*) malloc(sizeof(struct node));
            new_node -> data = ;
            while(ptr->next!= NULL)
            ptr = ptr -> next;
            ptr -> next = new_node;
          new_node -> next = NULL;
        }

        Printf("Enter the data:");
        scanf("%d",&num);
    }


}

void display()
{
    struct node *ptr
    ptr = start;
    while(ptr != NULL)
    {
        printf("\t %d", ptr -> data);
        ptr = ptr -> next;
    }
}

void insert_beg{
struct node *new_node;
int num;
prinf("Enter the data:");
scanf("%d",&num);

new_node =(struct node *)malloc(size of(struct node));
new_node -> data = num;
start -> prev = new_node;
new_node -> next = start;
new_node -> prev = NULL;
start = new_node;
}

void insert_end(){
struct node *ptr *new_node;
int num;
printf("Enter the data:");
scanf("%d",&num);
new_node = (struct node *)malloc(size of(struct node));
new_node -> data = num;
ptr = start;
while(ptr -> next!= NULL)
    ptr = ptr -> next;
ptr -> next = new_node;
new_node -> prev = ptr;
new_node -> next = NULL;

}

void insert_before()
{
    struct node *ptr *new_node;
    int num, val;
    printf("Enter the data:");
    scanf("%d",&num);
    printf("Enter the value before which the value has to be inserted:");
    scanf("%d",&val);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = num;
    ptr = start;
    while(ptr -> != val)
        ptr = ptr -> next;
    new_node -> next = ptr;
    new_node -> prev = ptr -> prev;
    ptr -> prev -> next = new_node;
    ptr -> prev = new_node;
}


void insert_after()
{
    struct node *ptr *new_node;
    int num, val;
        printf("Enter the data:");
    scanf("%d",&num);
    printf("Enter the value before which the value has to be inserted:");
    scanf("%d",&val);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node - > data = num;
    ptr = start;
    while(ptr -> data ! = val){
        ptr = ptr -> next;
    }

    new_node -> prev = ptr;
    new_node -> next = ptr -> next;

}

void delete_beg()
{
    struct node *ptr;
    ptr = start;
    start = start -> next
    start -> prev = NULL;
    free(ptr);
}

void delete_end()
{
    struct node *ptr;
    ptr = start;
    while(ptr -> next != NULL)
        ptr = ptr -> next;
    ptr -> prev -> next = NULL;
    free(ptr);
}

void delete_node()
{
    struct node *ptr;
    int val;

    if(start == NULL)
    {
        printf("\n List is empty!");
        return;

    }

    printf("\n Enter the value of the node to be delete:");
    scanf("%d",& val);

    ptr = start;

    while(ptr != NULL && ptr -> data != val)

}

void delete_node(){
 struct node *delete_specific(struct node*struct)
 {
     struct node *ptr
     int val;

     if(start==NULL)
     {
         printf("\n List is empty:");
         return start;
     }

     printf("\n Enter the value of the node to be deleted :");
     scanf("%d",&val);

     ptr = start;

     while(ptr != NULL && ptr-> data != val)
        ptr = ptr -> next;

     if(ptr== NULL)
     {
         printf("\n value not found!");
     }

     if(ptr -> prev == NULL)
     {
         start = ptr -> next;
     }

     if(start!= NULL)
        start -> prev = NULL;
 }
    else
    {
        //connect previous node to the next node
        ptr -> prev -> next = ptr-> next;

        //connect next node to previous node
        if(ptr -> next != NULL)
            ptr-> next -> prev = ptr->prev;
    }

    free(ptr);

    printf("\n Node deleted successfully!");

    return start;

 }




}








}
