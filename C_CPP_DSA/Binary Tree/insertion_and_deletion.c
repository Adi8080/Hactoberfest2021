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

// insertion
node* insert(node *root,int data)
{
    if (root==NULL){
        root = createnode(data);
        return root;
    }
    push(root);
    int len=r+1;
    while (len!=0)
    {
        node *temp = queue[l];
        printf("%d\n",temp->data);   
        pop();

        if(!temp->left){
            temp->left=createnode(data);
            return root;
        }else{
            push(temp->left);
        }
        if (!temp->right)
        {
            temp->right=createnode(data);
            return root;
        }else{
            push(temp->right);
        }
        len=r-l+1;
    }
    
}

//deletion 
void deepest_deletion(node *root,node *d_node){
    node *temp;
    push(root);
    int size=r+1;
    while (size!=0)
    {
        temp=queue[l];
        pop();
        if(temp==d_node){
            temp=NULL;
            free(d_node);
            return;
        }
        if (temp->left==d_node)
        {
            temp->left=NULL;
            free(d_node);
            return;
        }else{
            push(temp->left);
        }
        if (temp->right==d_node)
        {
            temp->right=NULL;
            free(d_node);
            return;
        }else{
            push(temp->right);
        }
        size=r-l+1;
    }
    
}

node *delete(node *root, int data)
{

    if (root==NULL) 
        return root;
    if (root->left==NULL && root->right==NULL){
        if (root->data==data)
            return NULL;
        else
            return root;
    }
    push(root);
    node *temp,*d_node;
    node *key_node=NULL;
    int size =r+1;
    while (size!=0)
    {
        temp=queue[l]; 
        d_node=queue[r];
        pop();
        if (temp->data==data){
            key_node=temp;
        }
        if(temp->left!=NULL){
            push(temp->left);
        }
        if (temp->right!=NULL)
        {
            push(temp->right);
        }
        if(l==-1 && r==-1){
            key_node->data=d_node->data;
            deepest_deletion(root,d_node);
            break;
        }
        size=r-l+1;
    }
    return root;
}

//traversing
void inordertraversal(node *root)
{
    if (root==NULL)
    {
        return ;
    }
    inordertraversal(root->left);
    printf("%d ",root->data);
    inordertraversal(root->right);
    
}

//main
int main()
{
    node* root = createnode(10);
    root->left = createnode(11);
    root->left->left = createnode(7);
    root->left->right = createnode(12);
    root->left->right->right = createnode(69);
    root->right = createnode(9);
    root->right->left = createnode(15);
    root->right->right = createnode(8);
    inordertraversal(root);
    root=delete(root,12);
    printf("\n");
    inordertraversal(root);
    return 0;
}

