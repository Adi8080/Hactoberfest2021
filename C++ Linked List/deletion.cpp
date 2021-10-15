#include<iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
node *head=NULL;
 void insert_beg(int d)
 {
     node *ptr=new node();
     ptr->data=d;
     ptr->link=head;
     head=ptr;
 }
 void deletebeg()
 {
     if(head==NULL)
     cout<<"list empty \n";
     else{
         node *ptr=head;
         head=head->link;
         free(ptr);
         
     }
 }
 void delete_end()
 {
     node *ptr;
     if(head==NULL)
     cout<<"list empty \n";
     if(head->link==NULL)
     {
         ptr=head;
         head=NULL;
         free(ptr);
     }
     else{
         node *temp;
         ptr=head;
         while(ptr->link!=NULL)
         {
             temp=ptr;
             ptr=ptr->link;
         }

         temp->link=NULL;
         free(ptr);
     }
 }
 void display()
 {
     node *temp=head;
while(temp->link!=NULL)
{
    cout<<temp->data<<"->";
    temp=temp->link;
}
cout<<temp->data<<"\n";
 }

 int main()
 {
     insert_beg(5);display();
insert_beg(7); display();
insert_beg(87);display();
insert_beg(6);display();
insert_beg(0);display();
insert_beg(1);display();
insert_beg(76);display();
    deletebeg();display();
    deletebeg(); display();
    delete_end(); display();
    
return 0;
 }