#include<bits/stdc++.h>

using namespace std;

class node
{
public:
	int data;
	node * next;
};

class linked
{
public:

	node * head = NULL;
	node * tail = NULL;

	node * create(int data)
	{
		node * s;
		s = new node;
		s->data = data;
		s->next = NULL;

		return s;
	}

	void insert(int data)
	{
		if(head == NULL)
		{
			node * s = create(data);
			head = s;
			tail = s;
		}
		else
		{
			node * s = create(data);
			tail->next = s;
			tail = s;
		}
	}

	void display()
	{
		node * root = head;
		if(root == NULL)
			cout<<"Linked loist is empty"<<endl;
		else
		{
			while(root != NULL)
			{
				cout<<root->data<<" ";
				root = root->next;
			}
			cout<<endl;
		}
	}

	void del_mid()
	{
		node * root = head;
		if(head == NULL)
			cout<<"Linked List is empty"<<endl;
		else
		{
			node * slow = head;
			node * fast = head;
			node * prev = head;
			while(fast != NULL && fast->next != NULL)
			{
				prev = slow;
				slow = slow->next;
				fast = fast->next->next;
			}
			cout<<slow->data<<" is the middle element"<<endl;
			node * nxt = slow->next;
			prev->next = nxt;
			delete(slow);
		}
	}
	
};

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	linked l;
	for(int i = 0; i < n; i++)
	{
		int d;
		cin>>d;
		l.insert(d);
	}

	l.display();

	l.del_mid();

	l.display();

	return 0;
}