//Circular Linked List with reverse and deletion

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int a;
	struct node *p;
};
struct node *header,*temp,*last;
void create();
void show();
void delfirst();
void dellast();
void reverse();

void main()
{
	int i,n;
	clrscr();
	printf("Enter the Number of Nodes");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		create();
	printf("\nOriginal List Entered is :-\n");
	show();
	printf("\nReversed List :-\n");
	reverse();
	show();
	printf("\nList After deleting first\n");
	delfirst();
	show();
	printf("\nList after deleting last element :-\n");
	dellast();
	show();
	getch();
}
void create()
{
	struct node *t1;
	t1=(struct node *)malloc(sizeof(struct node));
	printf("Enter The Data - ");
	scanf("%d",&t1->a);
	if(header==NULL)
	{
		t1->p=t1;
		header=t1;
		last=t1;
	}
	else
	{
		last->p=t1;
		t1->p=header;
		last=t1;
	}
}
void show()
{
	struct node *t1=header;
	if(t1==NULL)
	{
		printf("List is Empty");
		return;	
	}
	else
	{
		do
		{
			printf("->%d",t1->a);
			t1=t1->p;
		}while(t1!=header);
	}
}
void delfirst()
{
	if(header==NULL)
	{
		printf("Deletion Not Possible");
		return;
	}
	if(header->p==header)
	{
		header=NULL;
		return;
	}
	else
	{
		header=header->p;
		last->p=header;
	}
}
void dellast()
{
	if(header==NULL)
	{
		printf("Deletion Not Possible");
		return;
	}
	if(header->p=header)
	{
		header=NULL;
		return;
	}
	else
	{
		temp=header;
		while(temp->p!=last)
			temp=temp->p;
		temp->p=header;
	}
	last=temp;
}
void reverse()
{
	struct node *p1,*p2;
	temp=header;
	p1=last;
	do
	{
		p1=temp->p;
		temp->p=p1;
		p1=temp;
		temp=p2;
	}while(temp!=header);
	header=last;
}
