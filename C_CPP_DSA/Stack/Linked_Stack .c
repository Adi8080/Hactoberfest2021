#include<stdio.h>
#include<malloc.h>

struct Node
{
	int data;
	struct Node *lnk;
}*top = NULL;

struct Node *create()
{
	struct Node *p;
	p=(struct Node *)malloc(sizeof(struct Node));
	printf("Enter data: ");
	scanf("%d",&p->data);
	p->lnk = NULL;
	return p;
}

void push()
{
	struct Node *p;
	p = create();
	if(top==NULL)
		top=p;
	else
	{
		p->lnk = top;
		top = p;
	}
	printf("%d has been pushed\n", p->data);
}

void pop()
{
	struct Node *p;
	if(top==NULL)
		printf("Stack Underflow\n");
	else
	{
		p = top;
		top = top->lnk;
		printf("%d has been popped\n", p->data);
		free(p);
	}
}

void disp()
{
	struct Node *ptr;
	if(top==NULL)
		printf("\n");
	else
	{
		ptr = top;
		printf("%d ->Top\n", ptr->data);
		ptr = ptr->lnk;
		while(ptr!=NULL)
		{
			printf("%d\n", ptr->data);
			ptr = ptr->lnk;
		}
	}
}

main()
{
	int choice;
	do{
		printf("\n1. Push \n2. Pop \n3. Display \n4. Exit \n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push();
				   break;
			case 2:pop();
				   break;
			case 3:disp();
				   break;
			case 4:printf("Thank You");
				    break;
			default:printf("Wrong Choice\n");
		}
	}while(choice!=4);
}

