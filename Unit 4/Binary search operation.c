/*Write
tree:
a.
b.
c.
d.
a program to perform following operations on Binary search
insert delete
height of the tree
total no. of nodes in the tree */


#include<stdio.h>
#include<stdlib.h>

//Structure of a node
struct Node{
   int data;
   structe node *left, *right;
};

//Create a new Node
struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc
    (sizeof(struct Node));
};

  newNode -> data = data;
  newNode -> left = NULL;
  newNode -> right = NULL;

  return newNode;

}

//1. Insert a node..
 struct Node* insert(struct Node* root, int data){
     if(root == NULL)
        return createNode(data);

    if(data < root -> data)
        root -> left = insert(root-> left, data);
    else if(data > root -> data)
        root -> right = insert(root-> right, data);

    return root;
 }

 //Find the smallest node
 struct Node* minValueNode(struct Node* node){
     struct Node* current = node;

     while (current -> left != NULL)
     current = current -> left;

     return current;

 };

 //2. Delete a node
 struct Node* deleteNode(struct NOde* root, int data){
     if (root == NULL)
        return root;

     if(data < root -> data)
        root -> left = deleteNode(root->left, data);

     else if(data > root -> data)
        root -> right = deleteNode(root -> right, data);

     else {
        //Node has no left child
        if(root -> left == NULL){
            struct Node* temp = root -> right;
            free(root);
            return temp;
        }

        //Node has no right child
        else if (root-> right == NULL){
            struct Node* temp = root -> left;
            free(root);
            return temp;
        }

        //Node has two children..
        Struct Node* temp = minValueNode(root-> right);
        root -> data = temp -> data;
        root -> right = deleteNode(root-> right, temp->data);
     }

     return root;
 };

 //3. Find height of tree
 int height(struct Node* root){
     if (root == NULL)
        return 0

        int leftHeight = height(root-> left);
        int rightHeight = height(root-> right);

        if(leftHeight > rightHeight)
            return leftHeight + 1;

        else
            return rightHeight + 1;
 }

 //4. Count total number of node..
 int countNOde(struct Node* root){
     if(root ==NULL)
        return 0;

     return 1+ countNode(root->left) + countNode(root->right);
 };

 // Insight transveral.
 void inorder(struct Node* root){
     if(root != Null){
        inorder(root -> left);
        printf("%d",root-> right);
     }
 }

 //Main function..
 int main(){
     struct Node* root = NULL;
     int choice, value_type

     while (1) {
        printf("\n---Binary Search Tree---");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Height");
        printf("\n4.. Total Node");
        printf("\n5. Display (Inorder)");
        printf("\n6. Exit");

        printf("\nEnter your choice:");
        scanf("%d",&choice);

        switch(choice){
        case 1:
            printf("Enter value:");
            scanf("%d",&value);
            root - insert(root, value);
            break;

        case 2:
            printf("Enter the value to delete:");
            scanf("%d",&value);
            root = deleteNode(root, value);

        case 3:
            printf("Height of tree =%d", height(root));
            break;

        case 4:
            printf("Total number of node = %d", countNode(root));
            break;

        case 5:
            printf("Inorder");
            Inorder(root);
            break;

        case 6:
            exit(0);

        default:
            printf("Invalid choice!")
        }
     }
     return 0;
 }


