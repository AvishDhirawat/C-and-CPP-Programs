#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>
void create();
void reverse();
void display();
struct node
{
 struct node *p;
 int a;
 };
 struct node *header;
 void create()
 {
  struct node *temp;
  int data;
  temp = (struct node *)malloc(sizeof(struct node));
  printf("\nEnter Data : ");
  scanf("%d",&data);
  temp->a=data;
  temp->p=header;
  header=temp;
  }
  void display()
  {
   struct node *temp;
   temp = header;
   if(header == NULL)
   {
    printf("\nNode Empty\n");
    return;
    }
    while(temp!=NULL)
    {
     printf("-> %d \n",temp->a);
     temp=temp->p;
     }
     }
     void main()
     {
      int i,n;
      clrscr();
      header=NULL;
     printf("\nEnter the Number of Nodes to Be Created : ");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     create();
     printf("\nCreated Node : \n");
     display();
     printf("\nAfter Reversing : \n");
     reverse();
     display();
     getch();
     }
     void reverse()
     {
      struct node *t1,*t2,*tmp;
      tmp=header;
      t1=NULL;
      while(tmp!=NULL)
      {
       t2=tmp->p;
       tmp->p=t1;
       t1=tmp;
       tmp=t2;
       }
       header=t1;
       }