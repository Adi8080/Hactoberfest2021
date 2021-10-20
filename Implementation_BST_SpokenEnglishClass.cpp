#include <bits/stdc++.h>

using namespace std;

class Node{

  public:

    int data;

    Node *left;

    Node *right;

  

  public:

    Node(int x){

      data = x;

      left = NULL;

      right = NULL;

    }

};

Node *insert_BST(Node *tree, int val)

{

  if(tree == NULL){

    cout<<val <<" is inserted into BST successfully"<<endl;

    return (new Node(val));

  }

  if(tree->data >= val)

    tree->left = insert_BST(tree->left, val);

  else

    tree->right = insert_BST(tree->right, val);

  return tree;

}

bool searchInBST(Node *root , int k) {
	// Write your code here
    if(root==NULL){
        return false;
    }
    if(root->data==k){
        return true;
    }
    else if(root->data>k){
    	return searchInBST(root->left ,k);
    }
    else if(root->data<k){
        return searchInBST(root->right ,k);
    }
    
}
Node* delete_BST(Node *tree, int val)

{

  if(tree == NULL){

    cout<<"value is not present in BST"<<endl;

    return tree;

  }

  if(tree->data > val)

    tree->left = delete_BST(tree->left, val);

  else if(tree->data < val)

    tree->right = delete_BST(tree->right, val);

  else{

    if(tree->left == NULL){

      Node *temp = tree->right;

      free(tree);

      tree= temp;

    }

  
    else if(tree->right == NULL){

      Node *temp = tree->left;

      tree = temp;

      free(temp);

    }

  
    else{

      Node *temp = tree->left;

      while(temp->right->right!=NULL){   

        temp = temp->right;

      }

      tree->data = temp->right->data;       

      Node *temp2 = temp->right->left;      

      free(temp->right);                    

      temp->right = temp2;                  

    }

  }

  return tree;

}

void inorder(Node *tree)

{

    if (tree != NULL)

    {

        inorder(tree->left);

        cout<<tree->data<<" ";

        inorder(tree->right);

    }

}
void printLevelATNewLine(Node *root) {
    if (root == NULL) {
        return;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        Node *first = q.front();
        q.pop();
        if (first == NULL) {
            if (q.empty()) {
                break;
            }
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout << first->data << " ";
        if (first->left != NULL) {
            q.push(first->left);
        }
        if (first->right != NULL) {
            q.push(first->right);
        }
    }
}

int main(){
    cout<<"BRITISH COUNCIL CLASS"<<endl;
    // cout<<"Root of the BST i.e. the first child ";
    // int x;
    // cin>>x;
    // cout<<x<<endl;
    Node *root = NULL;
    //takeInput(root);
    
    int z;
    while(z!=6){
    cout<<"*****************"<<endl;
    cout<<"Enter 1: To Insert student"<<endl;
    cout<<"Enter 2: To Search for any student"<<endl;
    cout<<"Enter 3: if any student exits"<<endl;
    cout<<"Enter 4: To print the tree in order"<<endl;
    cout<<"Enter 5: To print level wise"<<endl;
    cout<<"Enter 6: To Exit"<<endl;
    cout<<"*****************"<<endl;
    
    cin >> z;
    switch(z){
        case 1:
        cout<<"Enter the student roll no. as they enter the class "<<endl;
        int id;
        cin>>id;
        root=insert_BST(root, id);
        inorder(root);
        break;
        case 2:
        int k;
        cout<<"Enter the student Roll No. for search "<<endl;
        cin>>k;
        if(searchInBST(root,k)==false){
            cout<<"Student is NOT PRESENT in the class"<<endl;
        }
        else{
            cout<<"Student is PRESENT in the class"<<endl;
        }
        break;
        case 3:
        int m;
        cout<<"Enter the student's Roll No. who exited "<<endl;
        cin>>m;
        delete_BST(root, m);
        //printLevelATNewLine(root);
        break;
        case 4:
        inorder(root);
        break;
        case 5:
        printLevelATNewLine(root);
        break;
        case 6:
        z=6;
        break;
    }
    
    }
    // cout << ((searchInBST(root, k)) ? "true" : "false");
    cout<<"*******EXIT********"<<endl;
    delete root;

}