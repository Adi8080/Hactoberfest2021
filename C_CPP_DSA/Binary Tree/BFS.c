#include <stdio.h>
#include <stdlib.h>

//tree declaration
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
typedef struct Node node;
node* createnode(int data)
{
    node* new_node = ((node*)malloc(sizeof(node)));
    new_node->data=data;
    new_node->left=new_node->right=NULL;
    return new_node;
}

//queue declaration
node* queue[100]={};
int l=-1,r=-1;
void push(node* data)
{
    if(r==100){
        printf("queue is already full.");
    }else if(r==-1){
        l=0;
        r=r+1;
        queue[r]=data;
    }else{
        r=r+1;
        queue[r]=data;
    }
}
void pop()
{
    if(l==-1 && r==-1){
        printf("queue is already empty.\n");
    }
    else if (l<r){
        l++;
    }else{
        l=r=-1;
    }
}
void display()
{
    for (int i = l; i <= r; i++)
    {
        printf("%d ",queue[i]->data);
    }  
}

//BFS

void BFS(node *root){
    if (root==NULL){
        printf("Tree is empty!\n");
        return;
    }
    if (root->left==NULL && root->right==NULL)
    {
        printf("%d\n",root->data);
        return;
    }
    node *temp;
    push(root);
    int size=r+1;
    while (size!=0)
    {
        temp=queue[l];
        pop();
        printf("%d ",temp->data);
        if(temp->left!=NULL){
            push(temp->left);
        }
        if (temp->right!=NULL)
        {
            push(temp->right);
        }
        if (l==-1 && r==-1)
                break;
        size=r-l+1; 
    } 
}
int main(){
    node* root = createnode(10);
    root->left = createnode(11);
    root->left->left = createnode(7);
    root->left->right = createnode(12);
    root->right = createnode(9);
    root->right->left = createnode(15);
    root->right->right = createnode(8);
    BFS(root);
}