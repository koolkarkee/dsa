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

int main(){
    struct node *root = NULL;
    root = create();

    return 0;
}