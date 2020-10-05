#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{
 int a;
 struct node *p;
 };
 struct node *last;
 struct node *header;
 void create();
 void pswap();
 void show();
  void create()
 {
  int data;
  struct node *tmp;
  tmp = (struct node*) malloc(sizeof(struct node));
  printf("\nEnter the Value :");
  scanf("%d",&data);
  tmp -> a=data;
  tmp -> p=header;
  header = tmp;
  }
  void pswap()
  {
   struct node *temp;
   if (header==NULL)
   {
   printf("\nList Empty\n");
   return;
   }
   if(header->p==NULL)
   {
   printf("\nOnly One Node Exists.\nSwapping Not Possible.\n");
   return;
   }
   if(header->p->p==NULL)
   {
   temp=header;
   temp->p=temp->p->p;
   temp->p->p=header;
   }
   }
  void main()
    {
     int i,m;
     header = NULL;
     clrscr();
     printf("\nEnter the Number of Nodes : ");
     scanf("%d",&m);
     printf("\nEnter Data :- ");
     for(i=0;i<m;i++)
     create();
     pswap();
     show();
     getch();
     }
  void show()
  {
   struct node *tmp;
   tmp = header;
   printf("\nNow the List is :\n");
   while(tmp!=NULL)
   {
    printf("%d\n",tmp->a);
    tmp = tmp->p;
    }
    }