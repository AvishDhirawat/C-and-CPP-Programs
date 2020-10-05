#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stack_element
{
 int a;
 struct stack_element *p;
};

struct stack_element *top;
void push(int);
int pop();
void display();



int main()
{
 int t;
 printf("List of elements\n");
  push(5);
  push(6);
  push(10);
  push(111);

  display();
  t=pop();
  printf("Popped item is-> %d \n",t);
  printf("\nNow stack is: \n");
  display();
  return 0;
  }

void push(int t)
{
 struct stack_element *temp;
 temp=(struct stack_element*) malloc(sizeof(struct stack_element));

 temp->a=t;
 temp->p=top;
 top=temp;
}

int pop()
{
 int t;
 if(top==NULL)
 {
  printf("Pop operation not possible");
  return 0;
 }

 t=top->a;
 top=top->p;
 return t;
}

void display()
{
 struct stack_element *temp=top;
 while(temp!=NULL)
 {
  printf("%d\n",temp->a);
  temp=temp->p;
 }
}
