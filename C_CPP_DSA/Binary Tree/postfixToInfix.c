#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Tree declaration
struct Node
{
    char c;
    struct Node *left;
    struct Node *right;
};
typedef struct Node node;
node* createnode(char data)
{
    node* new_node = ((node*)malloc(sizeof(node)));
    new_node->c=data;
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

// Postfix To Infix
int isOperator(char c){
    if (c=='+' || c=='-' || c=='/' || c=='*' || c=='^')
        return 1;
    return 0;
}

node *toInfix(char postfix[]){
    node *t,*t1,*t2;
    for (int i = 0; i < strlen(postfix); i++)
    {
        if (!isOperator(postfix[i]))
        {
            t=createnode(postfix[i]);
            push(t);
        }
        else
        {
            t=createnode(postfix[i]);

            t1=stack[top];
            pop();
            t2=stack[top];
            pop();

            t->right=t1;
            t->left=t2;

            push(t);
        }
    }
    //get root element
    t=stack[top];
    pop();   
    return t;
}

// Inorder Traversal
void inorder(node *root){
    if (root==NULL)
        return;
    
    inorder(root->left);
    printf("%c",root->c);
    inorder(root->right);
}

// main
int main(){
    char postfix[] = "ab+ef*g*-";
    node *root = toInfix(postfix);
    printf("\nPostfix expression is : %s",postfix);
    printf("\nInfix expression is : ");
    inorder(root);
    printf("\n\n");
    return 0;
}