#include <stdio.h>
#include <stdlib.h>

//Tree declaration
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
typedef struct Node node;
node* createnode(int data)
{
    node* new_node = ((node*)malloc(sizeof(node)));
    new_node->data=data;
    new_node->left=new_node->right=NULL;
    return new_node;
}

int isMirror(node *root1,node *root2){
    if(!root1 && !root2)
        return 1;
    if(root1 && root2 && root1->data==root2->data)
        return isMirror(root1->left,root2->right) && isMirror(root1->right,root2->left);
    
    return 0;
}

void init_prog(node *root){
    if (isMirror(root,root))
        printf("\nYes, it is a symmetric tree!\n\n");
    else
        printf("\nNO, it is not a symmetric tree\n\n");
}

int main(){
    node* root = createnode(1);
    root->left = createnode(2);
    root->right = createnode(2);
    root->left->left = createnode(3);
    root->left->right = createnode(4);
    root->right->left = createnode(4);
    root->right->right = createnode(3);
    init_prog(root);
}