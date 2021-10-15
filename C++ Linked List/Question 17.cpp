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
			cout<<"Linked list is empty"<<endl;
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

	void del()
	{
		node * root  = head;
		if(root == NULL)
			cout<<"There is nothing to delete"<<endl;
		else
		{
			node * temp;
			while(root)
			{
				temp = root->next;
				delete(root);
				root = temp;
			}
			delete(temp);
			head = NULL;
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

	l.del();
	l.display();

	return 0;
}