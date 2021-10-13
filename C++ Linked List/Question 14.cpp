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
	// brute force
	void rotate(int d)
	{
		node * root = head;

		if(root == NULL)
			cout<<"List is empty"<<endl;
		else
		{
			for(int i = 0; i < d; i++)
			{
				root = head;
				int temp = root->data;
				while(root->next != NULL)
				{
					root->data = root->next->data;
					root = root->next;
				}
				root->data = temp;
			}
		}
	}

	void rotate_o(int d)
	{
		node * root = head;
		node * k = NULL;

		if(root == NULL)
		{
			cout<<"List is empty"<<endl;
		}
		else
		{
			for(int i = 0; i < d; i++)
			{
				root = root->next;
			}

			if(root == NULL)
				root = head;
			else
			{
				k = root;

				while(root->next != NULL)
				{
					root = root->next;
				}

				root->next = head;
				head = k->next;
				k->next = NULL;
			}
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

	int d;
	cin>>d;

	l.rotate_o(d);
	l.display();
	return 0;
}