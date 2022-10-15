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

	void remove()
	{
		node * curr = head;
		if(curr == NULL)
			cout<<"Nothing to remove as the list is empty"<<endl;
		else
		{
			node * prev = NULL;
			while(curr != NULL)
			{
				prev = curr;
				if(prev->data == curr->data)
				{
					while(curr != NULL && curr->data == prev->data)
						curr = curr->next;
					prev->next = curr;
				}
				else
				{
					curr = curr->next;
				}
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

	l.remove();

	l.display();

	return 0;
}