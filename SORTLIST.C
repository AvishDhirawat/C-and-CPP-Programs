#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<process.h>
struct node
{
 int a;
 struct node *p;
 };
 struct node *header;
 void sortlist();
 void display();
 void sortlist()
 {
  struct node *tmp,*t1;
  int data;
  tmp=(struct node*)malloc(sizeof(struct node));
  printf("Enter the Data: \n");
  scanf("%d",&data);
  tmp->a=data;
  tmp->p=NULL;
  if((header==NULL)||(header->a>data))
  {
   tmp->p=header;
   header=tmp;
   return;
   }
   else
   {
    t1=header;
    while(t1!=NULL)
    {
     if((t1->a<data)&&((t1->p->a>data)||(t1->p==NULL)))
     {
      tmp->p=t1->p;
      t1->p=tmp;
      break;
      }
      t1=t1->p;
      }
      }
      }
      void display()
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
    void main()
    {
    int  n,i;
    clrscr();
    header = NULL;
    printf("Enter the Number of Nodes : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    sortlist();
    display();
    getch();
    }