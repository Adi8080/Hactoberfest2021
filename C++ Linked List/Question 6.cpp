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
	
	// Brute just reveser and add carry to first and shift carry and again reverse the list
	void add_one()
	{
		node * root = head;

		if(root == NULL)
		{
			head = create(1);
		}
		else
		{
			node * prev = NULL;
			node * nxt = NULL;

			while(root != NULL)
			{
				nxt = root->next;
				root->next = prev;
				prev = root;
				root = nxt;
			}

			head = prev;

			root = head;

			int carry = 1,sum = 0;
			node * temp;

			while(root != NULL)
			{

				sum = carry + root->data;
		        carry = (sum >= 10)? 1 : 0;
		        sum = sum % 10;
		        root->data = sum;
		        temp = root;
		        root = root->next;
			}

			if (carry > 0)
			{
				temp->next = create(carry);
			}

			root = head;
			prev = NULL;
			nxt = NULL;

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

	// Recursivily add the carry to the previous one
	int add_carry(node * root)
	{
		if (root == NULL)
			return 1;

		int carry = root->data + add_carry(root->next);

		root->data = (carry) % 10;
		return (carry) / 10;
	}

	// i carry is still 1 then add new node
	void add_1()
	{
		int carry  = add_carry(head);
		if(carry)
		{
			node * s = create(carry);
			tail->next = s;
			tail = s;
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

	l.add_1();

	l.display();

	return 0;
}