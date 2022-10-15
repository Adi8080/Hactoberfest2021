// Writing the function only 

void remove_loop(node * head)
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

		while(fast->next != slow)
			fast = fast->next;

		fast->next = NULL;
	}
}