//Singly Linked List with Reverse, Deletion, Insertion

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};
struct node *header;
void makenode();
void show();
void reverse();
void delf();
void dell();
void insert();

int main()
{
		int i,n,opt;
		header=NULL;
		printf("Enter the number of nodes - ");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			makenode();
		}
		sos:
		printf("OPTIONS :-\n");
		printf("\t1. Make Node\n");
		printf("\t2. Show\n");
		printf("\t3. Reverse\n");
		printf("\t4. Delete First\n");
		printf("\t5. Delete Last\n");
		printf("\t6. Insert\n");
		printf("\t7. EXIT\n");

	switch(opt)
	{
		case 1:
			makenode();
			break;
		case 2:
			show();
			break;
		case 3:
			reverse();
			break;
		case 4:
			delf();
			break;
		case 5:
			dell();
			break;
		case 6:
			insert();
			break;
		case 7:
			exit(0);
			break;
		default:
			goto sos;
	}
	goto sos;
		return 0;
}

void makenode()
{
	int dat;
	struct node *t1,*temp1;
	t1=(struct node *)malloc(sizeof(struct node));
	printf("Enter the Data - ");
	scanf("%d",&dat);
	t1->data=dat;
	t1->link=NULL;
	
	if(header==NULL)
		header=t1;
	else
	{
		temp1=header;
		while(temp1->link!=NULL)
			temp1=temp1->link;
		temp1->link=t1;
	}
};

void show()
{
		struct node *temp=header;
		while(temp!=NULL)
			printf("%d",temp->data);
			temp=temp->link;
}

void delf()
{
		if(header==NULL)
		{
			printf("Deletion is not Possible\n");
			return;
		}
		else
		{
			header=header->link;
		}
}

void dell()
{
		struct node *temp3;
		if(header==NULL)
		{
			printf("Deletion not Possible");
			return;
		}
		else if(header->link==NULL)
		{
			header==NULL;	
		}	
		else
		{
			temp3=header;
			while(temp3->link->link!=NULL)
				temp3=temp3->link;
			temp3->link=NULL;
		}
}

void reverse()
{
		struct node *cur,*pre,*suc;
		if(header==NULL)
		{
			printf("No Element is Present");
			return;
		}
		else
		{
			cur=header;
			pre=NULL;
			while(cur!=NULL)
			{
				suc=cur->link;
				cur->link=pre;
				pre=cur;
				cur=suc;
				suc=cur->link;
			}
			header=pre;
		}
}

