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

	node * reverse_k(node * r,int k)
	{
		if(r == NULL)
			return r;
		node * root = r;
		node * nxt = NULL;
		node * prev =NULL;
		int c = 0;
		while(root != NULL && c < k)
		{
			nxt = root->next;
			root->next = prev;
			prev = root;
			root = nxt;
			c++;
		}
		
		if(nxt != NULL)
			r->next = reverse_k(nxt,k);

		return prev;

	}

	void reverse(int k)
	{
		head = reverse_k(head,k);
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
	l.reverse(k);
	l.display();

	return 0;
}