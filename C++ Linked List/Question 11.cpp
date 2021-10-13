// Writing functions

// using stack
bool check()
{
	stack<int> s;
	node * p = head, * k = head;

	while(p != NULL)
	{
		s.push(p->data);
		p = p->next;
	}

	while(k != NULL)
	{
		if(s.top() != k->data)
			return false;
		s.pop();
		k = k->next;
	}

	return true;
}

// Using reversing
bool check()
{
	node * s = head, * p = head;
	node * nxt = NULL;
	node * prev =NULL;

	while(s != NULL)
	{
		nxt = s->next;
		s->next = prev;
		prev = s;
		s = nxt;
	}

	while(p != NULL && prev != NULL)
	{
		if(p->data != prev->data)
			return false;
		p = p->next;
		prev = prev->next;
	}

	return true;

}