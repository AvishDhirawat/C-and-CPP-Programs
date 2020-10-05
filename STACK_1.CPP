#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct stack_e
{
 int a;
 struct stack_e *p;
 };
 struct stack_e *top;
 void push(int );
 int pop();
 void display();
 void push(int t)
 {
  struct stack_e *tmp;
  tmp = (struct stack_e *)malloc(sizeof(struct stack_e));
  tmp->a=t;
  tmp->p=top;
  top = tmp;
  }
  int pop()
  {
   int t;
   if(top == NULL)
   {
    printf("POP operation not possible\n");
    return 0;
    }
    else
    {
     t=top->a;
     top=top->p;
     return t;
     }
     }
     void display()
     {
      struct stack_e *tmp=top;
      while(tmp!=NULL)
      {
       printf("%d\n",tmp->a);
       tmp=tmp->p;
       }
       }
       void main()
       {
	int t;
	push(5);
	push(10);
	push(20);
	push(25);
	display();
	t=pop();
	printf("Poped items is %d ",t);
	printf("\n Now Stack is \n");
	display();
	getch();
	}