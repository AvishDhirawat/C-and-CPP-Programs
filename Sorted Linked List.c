// Sorted Linked List

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
	int a;
	struct node *p;
};
struct node *header;

void sorted_list()
{
	struct node *temp,*t1;
	int data;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("Enter the Data - ");
	scanf("%d",&data);
	temp->a=data;
	temp->p=NULL;
	if((header==NULL) || (header->a>data))
	{
		temp->p=header;
		header=temp;
		return;
	}
	else
	{
		t1=header;
		while(t1!=NULL)
		{
			if((t1->a<data) && ((t1->p->a>data) || (t1->p->a==NULL)))
			{
				temp->p=t1->p;
				t1->p=temp;
				break;
			}
		}
	}
}

void show()
{
	struct node *t=header;
	while(t!=NULL)
	{
		printf("%d\t",t->a);
		t=t->p;
	}
}

void main()
{
	int n,i;
	printf("Enter the Number of Nodes - ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		sorted_list();
	show();
	getch();
}
