#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct queue_element
{
 int a;
 struct queue_element *p;
};

struct queue_element *rear,*front;
void insert(int);
int deletion();
void display();



int main()
{
 int t;
 printf("List of elements\n");
  insert(5);
  insert(6);
  insert(10);
  insert(111);

  display();
  printf("Now performing deletion\n",t);
  t=deletion();
  printf("\nDeleted element is %d",t);
  printf("\nNow queue contain\n");
  display();
  getch();
  return 0;
  }


void insert(int t)
{
 struct queue_element *a1;
 a1=(struct queue_element*) malloc(sizeof(struct queue_element));

 a1->a=t;
 a1->p=NULL;

 if(front==NULL)
 {
  front=rear=a1;
  return;
  }
  else
  {
   rear->p=a1;
   rear=a1;
   }
 }


int deletion()
{
 int t;
 if(front==NULL)
 {
  printf("Deletion not possible");
  return 0;
 }

  if(front==rear)
  {
   front=rear=NULL;
   return 0;
   }
   t=front->a;
   front=front->p;
   return t;
}

void display()
{
 struct queue_element *temp=front;
 if(temp==NULL)
 {
  printf("Queue empty");
  return;
 }
 while(temp!=NULL)
 {
  printf("%d\n",temp->a);
  temp=temp->p;
 }
}
