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

	// Brute Method
	// Traverse the whole linked list and count the nodes in it 
	// Again traverse the linked list to count/2 and print the data
	void middle()
	{
		node * root = head;
		if(root == NULL)
		{
			cout<<"Linked list is empty"<<endl;
		}
		else
		{
			int n = 0;
			while(root!=NULL)
			{
				n++;
				root = root->next;
			}

			root = head;

			for(int i = 0; i < n /2; i++)
				root = root->next;
			cout<<root->data<<endl;
		}
	}

	// Optimise
	// Use two pointer approach make slow increatmented by one step and fast by two steps
	// whe fast is at the end then the slow will be at the middle
	void middle_t()
	{
		node * root = head;
		if(root ==  NULL)
			cout<<"Linked List is empty"<<endl;
		else
		{
			node * slow = head;
			node * fast = head;
			while(fast != NULL && fast->next != NULL)
			{
				slow = slow->next;
				fast = fast->next->next;
			}

			cout<<slow->data<<endl;
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

	l.middle();

	l.middle_t();

	return 0;
}