#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Tree declaration
struct Node
{
    char *data;
    struct Node *left;
    struct Node *right;
};
typedef struct Node node;
node* createnode(char str[])
{
    node* new_node = ((node*)malloc(sizeof(node)));
    new_node->data=str;
    new_node->left=new_node->right=NULL;
    return new_node;
}

//  string to num 
int toInt(char data[]){  
    int num=0;
    if (data[0]=='-')
    {
        for (int i = 1; i < strlen(data); i++)
        {
            num=num*10+data[i]-'0';
        }
        num=-1*num;
        return num;
    }else{
        for (int i = 0; i < strlen(data); i++)
        {
            num=num*10+data[i]-'0';
        }
        return num;
    }
}

// evaluation
int evaluate(node *root){
    if(root==NULL)
        return 0;
    if(!root->left && !root->right)
        return toInt(root->data);
    
    int left=evaluate(root->left);
    int right=evaluate(root->right);

    if (root->data="+")
        return left+right;
    if (root->data="-")
        return left-right;
    if (root->data="*")
        return left*right;
    return left/right;
}

//main 
int main()
{
    node *root = createnode("+"); 
    root->left = createnode("*"); 
    root->left->left = createnode("5"); 
    root->left->right = createnode("-4"); 
    root->right = createnode("-"); 
    root->right->left = createnode("100"); 
    root->right->right = createnode("20"); 
    printf("%d",evaluate(root));
    return 0;
}
