#include<stdio.h>
#include<stdlib.h>
struct stack_element
{
 int a;
 struct stack_element *p;
};
struct stack_element *top;
void push (int);
int pop();
void display();
void main()
{
    int t;
    push(99);
    push(36);
    push(17);
    push(3);
    push(55);
    display();
    t = pop();
    printf("Poped Iem is %d",t);
    printf("\n Now Stack is \n");
    display();
    getch();
}
void push(int t)
{
    struct stack_element *temp;
    temp = (struct stack_element *)malloc(sizeof(struct stack_element));
    temp->a=t;
    temp->p=top;
    top =temp;
}
int pop()
{
    int t;
    if(top==NULL)
    {
        printf("Operation Unsuccessful\n Try Entering A Element First\n");
        return;
    }
    else
    {
        t = top->a;
        top = top->p;
        return t;
    }
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
