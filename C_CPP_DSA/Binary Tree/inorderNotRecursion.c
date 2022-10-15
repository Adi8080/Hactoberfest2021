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

//stack declaration
node *stack[100];
int top=-1;
void push(node *temp){
    if (top==100)
    {
        printf("Stack is full\n");
        return;
    }
    stack[top+1]=temp;
    top++;
}
void pop(){
    if (top==-1)
    {
        printf("stack is empty.Nothing to pop.\n");
        return;
    }
    top--;
}

// Inorder Traversal with stack without recursion 
void inorder(node *root){
    node *temp=root;
    while (temp!=NULL || top!=-1)
    {
        while (temp!=NULL)
        {
            push(temp);
            temp=temp->left;
        }
        printf("%d ",stack[top]->data);
        temp=stack[top]->right;
        pop();
    }
}
// Inorder traversal without stack and recursion -- Morris Traversal
/* did not understand
void inorder_(node *root){
    if(root==NULL)
        return;
    node *temp=root,*pre;
    while (temp!=NULL)
    {
        if (temp->left==NULL)
        {
            printf("%d ",temp->data);
            temp=temp->right;
        }else{
            pre=temp->left;
            while (pre->right!=NULL && pre->right!=temp)
                pre=pre->right;
            
            if (pre->right==NULL){
                pre->right=temp;
                temp=temp->left;
            }else{
                pre->right=NULL;
                printf("%d ",temp->data);
                temp=temp->right;
            }
        }    
    }
}
*/

//main
int main(){
    node* root = createnode(10);
    root->left = createnode(11);
    root->left->left = createnode(7);
    root->left->right = createnode(12);
    root->right = createnode(9);
    root->right->left = createnode(15);
    root->right->right = createnode(8);
    inorder(root);
}