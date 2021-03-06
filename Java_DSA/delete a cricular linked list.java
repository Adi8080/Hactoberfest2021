import java.util.Scanner;
// Other imports go here
// Do NOT change the class name
class LinkList
{
  int data;
  LinkList next;
  LinkList(int d)
  {
    data=d;
  }
}

class Main
{
  // Insert in Beginning
  static LinkList insertBeg(LinkList head, int data)
  {
    LinkList newLink = new LinkList(data);
    LinkList t = head;
    newLink.next = head;   // link new node at beginning of list
    if (head != null)
    {
      while(t.next != head)
        t = t.next;
      t.next = newLink;
    }
    else
      newLink.next = newLink;
    head = newLink;  // Change the head to new node.
    return head;
  }
  // Insert in end
  static LinkList insertEnd(LinkList head, int data)
  {
    LinkList newLink = new LinkList(data);
    LinkList last = head;
    newLink.next = null;   // link new node to NULL as it is last node
    if (head == null)  // if list is empty add in beginning.
    {
      head = newLink;
      return head;
    }
    while (last.next != null)  // Find the last node
      last = last.next;
    last.next = newLink;  // Add the node after the last node of list
    return head;
  }

  public static void traverse(LinkList first)
  {
    LinkList temp = first;
    if (first != null)
    {
      // Keep printing nodes till we reach the first node again
      do
      {
        System.out.print(temp.data + " "); // print data
        temp = temp.next;
      }
      while (temp != first);
    }
  }
  

static LinkList deleteBeg(LinkList head){

  if(head==null ||head.next==null)
    return null;
  LinkList curr=head;
  LinkList temp=head;
  while(curr.next!=head)
  {
    curr=curr.next;
  }
  head=temp.next;
  curr.next=temp.next;
  return head;
}
static LinkList deleteEnd(LinkList head){
  // Write your code here
  if(head==null ||head.next==null)
    return null;
  LinkList fast=head;
  while(fast.next.next.next!=head && fast.next.next!=head)
  {
   fast=fast.next.next;
  }
  if(fast.next.next.next==head)
    fast.next.next=head;
    else
      fast.next=head;
 return head; 
}
  
public static void main(String[] args)
{
  int t,n,m,x,y,i=0;
  Scanner s = new Scanner(System.in);
  LinkList head = null, t1, t2;
  n = s.nextInt();
  while(n>0){
    m = s.nextInt();
    head = insertBeg(head, m);
    n--;
  }
  int q = s.nextInt();
  while(q-- > 0){
    int choice = s.nextInt();
    if(choice == 1){
      head = deleteBeg(head);
    }else if(choice == 2){
      head = deleteEnd(head);
    }else{
      System.out.println("Wrong Input");
      System.exit(0);
    }
  }
  traverse(head);
  System.out.println();
}
}
