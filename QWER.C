#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<process.h>
struct node
{
 int a;
 struct node *p;
 };
 struct node *last;
 struct node *header;
 void show();
 void rev();
 void create1();
 void create();
 void dfirst();
 void dlast();
    void main()
    {
     int m,n,i;
     header = NULL;
     while(1)
     {
     clrscr();
     options:
      printf("Select form the Following Options:\n");
      printf("1 - Create\n 2 - Show\n 3 - Reverse\n 4 - Delete First Node\n 5 - Delete Last Node\n 6 - Exit\n");
      scanf("%d",&m);
     switch(m)
     {
     case 1 :
     {
     printf("Enter the Number of Nodes :");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
      create1();
      }
      goto options;
      }
      case 2 :
      {
       show();
       goto options;
       }
      case 3 :
      {
       rev();
       show();
       goto options;
       }
      case 4 :
      {
      dfirst();
      show();
      goto options;
      }
      case 5 :
      {
      dlast();
      show();
      goto options;
      }
      case 6 :
      {
      exit(0);
      }
      default :
      {
       printf("Invalid Option.\n Please Try Again....\n");
       goto options;
       }
       }
      getch();
      }
      }
   void create()
 {
  int data;
  struct node *tmp;
  tmp = (struct node*) malloc(sizeof(struct node));
  printf("Enter the Value :");
  scanf("%d",&data);
  tmp -> a=data;
  tmp -> p=header;
  header = tmp;
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
      void create1()
      {
       int data ;
       struct node *tmp,*t1;
       tmp = (struct node *)malloc(sizeof(struct node));
       printf("Enter the Value :");
       scanf("%d",&data);
       tmp -> a=data ;
       if(header == NULL)
       {
	header = tmp;
	tmp -> p=NULL;
	last = tmp;
	}
	 else {
	  last -> p =tmp;
	  last = last->p;
	  tmp -> p=NULL;
	  }
	  }
	  void rev ()
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
	void dfirst()
	{
	 if (header==NULL)
	 {
	  printf("\nDeletion Not Possible\n");
	  }
	  else
	  header =header->p;
	  }
	  void dlast()
	  {
	   struct node *tmp=header,*prev;
	   if(header==NULL)
	   {
	    printf("\nDeletion Not Possible\n");
	    }
	    prev = tmp;
	    if(prev->p==NULL)
	    {
	    header == NULL;
	    return;
	    }
	    else
	    {
	     while(tmp->p!=NULL)
	     {
	      prev = tmp;
	      tmp = tmp->p;
	      }
	      prev->p=NULL;
	      }
	      }