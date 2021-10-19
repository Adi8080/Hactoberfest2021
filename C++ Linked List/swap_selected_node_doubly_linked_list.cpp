// Input: 1 -> 2 -> 3 -> 4 -> 5, K = 2
// Output: 1 -> 4 -> 3 -> 2 -> 5
// Explanation: The 2nd node from 1st is 2 and
// 2nd node from last is 4, so swap them.

#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *pre;
};
node *head = NULL;
void insert(int d)
{
    node *ptr = new node();
    ptr->data = d;
    ptr->next = NULL;
    node *temp = head;
    if (head != NULL)
    {
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = ptr;
        ptr->pre = temp;
    }
    else
    {
        ptr->pre = head;
        head = ptr;
    }
}
void swap(int d)
{
    node *temp = head;
    int c = 1;
    while (temp->next != NULL)
    {
        temp = temp->next;
        c++;
    }
    int k = c - d;

    temp = head;
    for (int i = 1; i < d; i++)
    {
        temp=temp->next;
    }
    node *ptr=head;
    for (int i = 1; i <= k; i++)
    {
        ptr=ptr->next;
    }
    c=temp->data;
    temp->data=ptr->data;
    ptr->data=c;

}
void display()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}
int main()
{
    insert(1);
    display();
    cout << endl;
    insert(2);
    display();
    cout << endl;
    insert(3);
    display();
    cout << endl;
    insert(4);
    display();
    cout << endl;
    insert(5);
    display();
    cout << endl;
    // swap 2nd position with last 2nd position
    swap(2);
    display();
    cout<<endl;
    return 0;
}