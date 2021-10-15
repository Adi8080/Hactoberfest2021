/*
Write a program to implement Circular Queue using arrays that performs following
operations. (a) INSERT (b) DELETE (c) DISPLAY
*/

#include <stdio.h>
#include <stdlib.h>

#define QueueSize 3

void CQpush();
void CQpop();
void CQdisplay();

int front = -1, rear = -1, CQueue[QueueSize];

void CQpush()
{
	int element;
	// printf("\n CQpush");
	if (rear >= QueueSize-1)
	{
		printf("\n Circular Queue is Overflow.");
	}
	else
	{
		printf("\nInsert Element in a Queue: ");
		scanf("%d",&element);
		if (front == -1)
		{
			front = rear= 0; 	
		}
		else
		{
			rear++;
		}
		CQueue[rear]=element;
		printf("\n inserted element is : %d",element);
	}

}

void CQpop()
{
	// printf("\n CQpop");
	int del_element;
	if (front == -1)
	{
		printf("\n Circular Queue is Underflow.");
	}
	else
	{
		del_element = CQueue[front];
		if (front == rear)
		{
			front = rear = -1;
		}
		else
		{
			front++;
		}	
			printf("\n Element Deleted. %d \n",del_element);	
	}
}

void CQdisplay()
{
	// printf("\n CQdisplay");

	if (front == -1)
	{
		printf("\n Circular Queue is Empty.\n");
	}
	else
	{
		printf("\n Data is: ");
		for (int i = front; i <= rear ; i++)
		{
			printf("\n %d\t ",CQueue[i]);
		}
	}	
}


int main()
{

	int choice;
	while(1)
	{
		printf("\n\n 1. Insert element to Circular Queue. \n 2. Delete element from Circular Queue. \n 3. Display data in a Circular Queue. \n 4. Exit");
		printf("\n\n Enter your choice: ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
					CQpush();
			break;

			case 2:
					CQpop();
			break;

			case 3:
					CQdisplay();
			break;

			case 4:
			printf("\n Exit ");
				exit(0);
			break;

			default:
				printf("\n Enter valid choice.");
			break;			
		}

	}
	return 0;
}
