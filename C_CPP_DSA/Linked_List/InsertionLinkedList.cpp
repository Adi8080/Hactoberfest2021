#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node* ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"\n";
        ptr=ptr->next;
    }
}

struct Node* InsertAtFirst(struct Node *head,int data)   //O(1)
{
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

struct Node* InsertAtEnd(struct Node *head,int data)   //O(n)
{
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node* p=(struct Node*)malloc(sizeof(struct Node));
    p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

struct Node* InsertAfterNode(struct Node *head,struct Node *prevNode,int data)   //O(1)
{
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    return head;
}

struct Node* insertAtIndex(struct Node*head,int data,int index)  //O(n)
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    ptr->data=data;
    return head;
}

int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    // allocate memory for nodes in the linked list
    head =(struct Node*)malloc(sizeof(struct Node));
    second =(struct Node*)malloc(sizeof(struct Node));
    third =(struct Node*)malloc(sizeof(struct Node));
    fourth =(struct Node*)malloc(sizeof(struct Node));
    
    head->data=7;
    head->next=second;
   
    second->data=11;
    second->next=third;
    
    third->data=67;
    third->next=fourth;

    fourth->data=41;
    fourth->next=NULL;

    linkedListTraversal(head);
    head=InsertAtFirst(head,56);
    cout<<"\nAfter insertion at start-\n";
    linkedListTraversal(head);
    head=insertAtIndex(head,39,2);
    cout<<"\nAfter insertion at an index-\n";
    linkedListTraversal(head);
    head=InsertAtEnd(head,100);
    cout<<"\nAfter insertion at the end-\n";
    linkedListTraversal(head);
    head=InsertAfterNode(head,fourth,63);
    cout<<"\nAfter insertion after a node-\n";
    linkedListTraversal(head);
     return 0;
}