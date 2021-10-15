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

	// Reversing the list and deleting the first occurance and again reversing 
	void del_last_occr(int data)
	{
		node * root = head;
		if(root == NULL)
			cout<<"List is empty"<<endl;
		else
		{
			node * nxt = NULL;
			node * prev = NULL;

			while(root != NULL)
			{
				nxt = root->next;
				root->next = prev;
				prev = root;
				root = nxt;
			}

			head = prev;
			root = head;
			nxt = NULL;

			if(root->data == data)
				head = root->next;
			else
			{
				while(root != NULL && root->data != data)
				{
					nxt = root;
					root = root->next;
				}

				if(nxt != NULL && nxt->next != NULL)
					nxt->next = nxt->next->next;
				else
					nxt->next = NULL;
			}

			prev = NULL;
			nxt = NULL;
			root = head;

			while(root != NULL)
			{
				nxt = root->next;
				root->next = prev;
				prev = root;
				root = nxt;
			}

			head = prev;
		}
	}

	// Finding the last occurance of element and deleting that one
	void del_occr(int data)
	{
		int n = 0,i = 0;
		node * root = head;
		if(root == NULL)
			cout<<"List is empty"<<endl;
		else
		{
			while(root!= NULL)
			{
				if(root->data == data)
					n = i;
				root = root->next;
				i++;
			}

			root = head;

			for(int j = 0; j < n-1; j++)
				root = root->next;
			
			if(root != NULL && root->next != NULL)
				root->next = root->next->next;
			else
				root->next = NULL;
		}
	}

	// Simple Approach
	void del_ocr(int data)
	{
		node * root = head;

		if(root == NULL)
			cout<<"List is empty"<<endl;
		else
		{
			node * temp = NULL;

			while(root)
			{
				if(root->data == data)
					temp = root;
				root = root->next;
			}

			if(temp != NULL && temp->next == NULL)
			{
				root = head;
				while(root->next != temp)
					root = root->next;
				root->next = NULL;
			}

			if(temp != NULL && temp->next != NULL)
			{
				temp->data = temp->next->data;
				temp->next = temp->next->next;
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

	int data;
	cin>>data;

	l.del_ocr(data);

	l.display();

	return 0;
}