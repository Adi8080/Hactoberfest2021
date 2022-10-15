// Justing writing the function to detect the loop and the starting point of the loop

// Two pointers approach
bool loop(node * root)
{
	if(root == NULL || root->next = NULL)
		return false;
	node * slow = head;
	node * fast = head->next;
	while(fast != NULL && fast->next != NULL)
	{
		if(slow == fast)
			return true;
		slow = slow->next;
		fast = fast->next->next;
	}

	return false;
}

// Make use of visited array 
vector<int> vis(0,10);
bool loop(node * root)
{
	while(root != NULL)
	{
		if(vis[root->data])
			return true;
		vis[root->data] = 1;
		root = root->next;
	}

	return false;
}

void check_loop_node(node * root)
{
	node * slow = head;
	node * fast = head;
	int flag = 0;
	while(fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast)
		{
			flag = 1;
			break;
		}
	}

	if(flag == 1)
	{
		slow = head;
		while(slow != NULL && fast != NULL && slow != fast)
		{
			slow = slow->next;
			fast = fast->next;
		}

		cout<<slow->data<<" is the head node"<<endl;
	}
	
}