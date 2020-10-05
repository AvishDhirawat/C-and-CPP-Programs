#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{
 struct node *p;
 int a;
 };
 struct node *header=NULL;
 void create();
 void display();
 void rev();
 void create()
 {
  struct node *tmp;
  int t;
  tmp = (struct node *)malloc(sizeof(struct node));
  printf("Enter The Data : ");
  scanf("%d",&t);
  tmp->a=t;
  tmp->p=header;
  header = tmp;
  }
  void display()
  {
   struct node *tmp;
   tmp = header;
   while(tmp!=NULL)
   {
    printf("->%d\n",tmp->a);
    tmp = tmp->p;
    }
    }
    void main()
    {
     int i,n;
     printf("Enter No. of Nodes : \n");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     create();
     display();
     printf("After Reversing : \n");
     rev();
     display();
     getch();
     }
     void rev()
     {
      struct node *p1,*p2,*tmp;
      tmp = header;
      p1 = NULL;
      while(tmp!=NULL)
      {
      p2 =tmp->p;
      tmp->p=p1;
      p1=tmp;
      tmp =p2;
      }
      header =p1;
      }