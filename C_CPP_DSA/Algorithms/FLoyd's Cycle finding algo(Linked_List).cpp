/*******************************************************************************************
Basically we have two pointers in this algo, one fast and other slow.
The time when faster moves by 2 nodes slower moves 1 node. So till the 2nd pointer reaches NULL or the last node of the LL
(depending on even and odd nodes present respectively) the first pointer reaches the midlle elements as per the conditions. 
1. Used to find middle elment
2. or used in cyclic LL

Example Problem: Make a cycle, Detect and remove cycle in LL using Floyd's Cycle finding algo.
 
 APPROACH: DETECTION The time when faster moves by 2 nodes slower moves 1 node(both pointers start at head). So till the 2nd pointer reaches NULL or the last node 
           of the LL, here the faster pointer moves to the position where cyclinf takes. So there is a time when slow == fast which means cycling is possible
           and basically if cycling will happen there will be no NULL so if slow==fast we get our solution.
           REMOVAL In detection when slow n fast pointer point same node, any 1 of them say fast is made to point at head and now till next of both slow and fast are
           not equal we increment both slow n fast by one node. As soon as condition satisfies slower pointer is made to point NULL.

****************************************************************************************************************************/         
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node                  // node is not in-nuilt we have to make it
{
    public:
    int data;
    node* next;
    node(int val)           //constructor
    {
        data = val;
        next = NULL;
    }
};
// Inserting element at tail of a linked list 
void insertAtTail(node* &head, int val)       // taking head by reference as we modify our LL
{
    node* n = new node(val);     // node n having data->val and next->NULL
     if(head == NULL)           //condition when no node is present in LL
    {
        head = n;
        return;
    }
    // iterator to traverse till last node
    node* temp = head;
    while(temp->next != NULL)
    temp = temp->next;
    temp->next = n;               //node n inserted and NULL is automatically assigned to its next
}

// To print the elements of the linked list
void display(node* head)            // head passed by value since no modifications are to be made
{
    node* temp = head;
    while(temp != NULL)
    {
    cout << temp->data << "->" ;
    temp = temp->next ;
    }
    cout << "NULL" <<  endl;
}
void makeCycle(node* &head, int pos)
{
    node *temp = head, *cyc;
    int count = 0;
    while(temp->next != NULL)
    {
        temp = temp->next;
        count++;
        if(count == pos)
        cyc = temp;
    }
    temp->next = cyc ;
}
 bool hasCycle(node *head) {
        node *p1 = head, *p2 = head;
        if(head == NULL )
            return 0;
           while(p2 != NULL && p2->next != NULL)        // take care that p2->next condition should not be written before p2 condition
            {
                p1 = p1->next;
                p2 = p2->next->next;
                if(p1 == p2)
                   return 1;
            }
               return 0;
    }
void removecycle(node* &head)  
{
    node *p1 = head, *p2 = head;
    while(p2 != NULL && p2->next != NULL)   
            {
                p1 = p1->next;
                p2 = p2->next->next;
                if(p1 == p2)
                   break;
            }
            p2 = head;
            while(p1->next != p2->next)
            {
                 p1 = p1->next;
                p2 = p2->next;
            }
            p1->next = NULL;
}
int main()
{
    node* head = NULL;
    int pos;
    cin>> pos;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    insertAtTail(head, 8);
    insertAtTail(head, 9);
    display(head) ;
    makeCycle(head, pos);
    bool t = hasCycle(head);
    cout << t << endl;                      // o/p should be 1 sice cycle made
    removecycle(head);
    display(head);
    t = hasCycle(head);
    cout << t << endl;                      // o/p should be 0 sice cycle removed
}
