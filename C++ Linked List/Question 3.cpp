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

	void find(int k)
	{
		node * root = head;
		if(root == NULL)
		{
			cout<<"List is empty"<<endl;
		}
		else
		{
			node * end = NULL;
			int sum = 0;

			while(root != NULL)
			{
				end = root;
				sum = 0;
				bool flag = false;
				while( end != NULL)
				{
					sum = sum + end->data;
					if(sum == k)
					{
						flag = true;
						cout<<"Found"<<endl;
						break;
					}

					end = end->next;
				}

				if(flag)
				{
					root = end->next;
					
				}
				else
				{
					root = root->next;
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

	int k;
	cin>>k;
	l.find(k);
	l.display();

	return 0;
}