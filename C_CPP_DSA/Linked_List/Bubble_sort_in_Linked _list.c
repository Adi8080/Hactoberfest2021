#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;  
};

struct node *head=NULL;
//head = NULL;
       
     void swap(struct node *prev, struct node* curr)
     {
         int temp;
         temp=prev->data;
         prev->data=curr->data;
         curr->data=temp;

     }



    void sort()
    {
        struct node *prev=head;
        struct node *curr=prev->next;
       while(curr!=NULL)
       { 
           if(curr->data<prev->data)
           {
               swap(prev,curr);
           }
           prev=prev->next;
           curr=curr->next;
       }

    }

   

   struct node *getnewnode(int v)
   {
       struct node *temp;
       temp=(struct node*)malloc(sizeof(struct node));
       temp->data=v;
       return temp;

   }


struct node *insertbeg(int val)
{
    struct node *ptr;
    ptr=getnewnode(val);
    ptr->next=head;
    head=ptr;

}

void display()
{
    struct node *run;
    while(run!=NULL)
    {
        printf("%d\n", run->data);
        run=run->next;
        
    }


}

void main()
{
    insertbeg(3);
    insertbeg(5);
    insertbeg(2);

   

   sort();
   sort();
   sort();
   display();


}
