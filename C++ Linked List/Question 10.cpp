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

	void find_n(int p)
	{
		node * root = head;
		int n = 0;
		while(root!=NULL)
		{
			n++;
			root = root->next;
		}

		root = head;

		for(int i = 0; i < n-p; i++)
			root = root->next;

		cout<<root->data<<endl;
	}

	// Here I am using two pointers 
	// Moving the fast to p and after the fast to end and increments slow to next in loop
	void find(int p)
	{
		node * slow = head;
		node * fast = head;

		while(p--)
			if(fast)
				fast = fast->next;

		if(fast == NULL)
			cout<<slow->data<<endl;
		else
		{
			while(fast != NULL && fast->next != NULL)
			{
				slow = slow->next;
				fast = fast->next;
			}
			cout<<slow->next->data<<" is the node"<<endl;
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

	int p;
	cin>>p;

	l.display();

	l.find(p);

	return 0;
}