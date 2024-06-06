#include<stdio.h>
#include<stdlib.h>

//tree node 
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* create(){
    //allocate a new node 
    struct node *newnode = (struct node*) malloc(sizeof(struct node));
    int d;

    printf("\nEnter a data for the node (or -1 for no node): ");
    scanf("%d", &d); 

    if(d == -1){
        return NULL;
    }

    newnode->data = d;

    //create a left child
    printf("\nEnter the left child of %d", d);
    newnode->left = create();
     
    //create a right child 
    printf("\nEnter the right child of %d", d);
    newnode->right = create();

    return newnode;
}

void preorder(struct node *root){ 
    if(root == NULL){
        return;
    }

    printf("%d ", root->data);

    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node *root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void postorder(struct node *root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data); 
}

int main(){
    struct node *root = NULL;
    root = create();

    printf("\nPreorder is : ");
    preorder(root);

    printf("\nInorder is : ");
    inorder(root); 

    printf("\nPostorder is : ");
    postorder(root); 

    return 0;
}