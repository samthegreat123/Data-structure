#include<stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node  *right;
};

 struct Node* createNode(int data)
 {
     struct Node* newNode;

     newNode = (struct Node*)malloc(sizeof(struct Node));

     new node -> data =data;
     new node -> left = NULL;

    struct Node* newNode;

    new = (struct Node*)malloc(sizeof(struct Node));

    newNode -> data =data;
    newNode -> left = NULL;
    newNOde -> right = NULL;

    return newNOde;
 };

 void preorder(Struct NOde* root)
 {
     if(root != NULL)
     {
         printf("%d", root ->data);
         preorder(root ->left);
         preorder(root->)right);
     }
 }

 void inorder(struct Node* root)
 {
     if(root != NULL)
     {
         inorder(root -> left);
         printf("%d", root->data);
         inorder(root-> right);
     }
 }

 void postorder(struct Node* root)
 {
     if (root != NULL)
     {
         postorder(root -> left);
         postorder(root -> right);
         printf("%d", root->data);

     }
 }

 void main()
 {
     struct Node* root = createNode(1);

     root -> left = createNode(2);
     root -> right =createNOde(3);

     root->left->left = createNode(4);
     root -> left->right = createNode(5);

     printf("Preorder:");
     preorder(root);

     printf("\nInorder:");
     inorder(root);
 }
