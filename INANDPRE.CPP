#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void inorder(struct node);
void preorder(struct node);
struct node
{
 struct node *rc,*lc;
 int a;
 };
 struct node *p1;
 struct node *create(int t)
 {
  struct node *temp;
  temp = (struct node *)malloc (sizeof(struct node));
  temp->a=t;
  temp->lc=temp->rc=NULL;
  return temp;
  }
   struct stack *top;
   void push (int );
   int pop();
   void display();
   struct stack
   {
    struct stack  *b,*q;
    int top;
    };
   void push(struct stack *t)
   {
    struct stack *temp;
    temp=(struct stack *)malloc(sizeof(struct stack));
    temp->b=t;
    temp->q=top;
    top=temp;
    }
    struct stack *pop()
    {
     struct stack *t;
     if(top==NULL)
     {
     printf("POP Operation Not Possible\n");
     return 0;
     }
     else
     {
      t = top ->b;
      top = top->q;
      return t;
      }
      }
void inorder (struct node *p)
{
 if (p==NULL)
 {
  printf("Tree Empty\n");
  return;
  }
  while(1)
  {
   while(p->lc!=NULL)
   {
   push(p);
   p=p->lc;
   }
   while(p->rc==NULL)
   {
   printf("%d",p->a);
   if (top==-1)
    return;
    p1 = pop();
    }
    printf("%d",p->a);
    p=p->rc;
    }
    }
    void preorder(struct node *p)
    {
    if(p==NULL)
    {
     printf("Tree Empty\n");
     return;
     }
     else
     push(p);
     while(top!=-1)
     {
     pop();
     printf("%d",p->a);
     if(p->rc!=NULL)
     push(p->rc);
     if(p->lc!=NULL)
     push(p->lc);
     }
     }
    void main()
    {
     struct node *root;
     root = create(15);
     root->lc=create(10);
     root->rc=create(40);
     root->lc->rc=create(50);
     root->rc->lc=create(45);
     }