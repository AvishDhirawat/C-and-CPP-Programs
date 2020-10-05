#include<stdio.h>
#include<conio.h>
void inorder(struct node);
void preorder(struct node);
struct node
{
 struct node *rc,*lc;
 int a;
 };
 struct node *create(int)
 {
  struct node *temp;
  temp = (struct node *)malloc (sizeof(struct node));
  temp->a=t;
  temp->lc=temp->=NULL;
  return temp;
  }
 void create(int);
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