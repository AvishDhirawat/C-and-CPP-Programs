#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void postorder(struct tree *p)
{
 struct tree *t;
 if(p==NULL)
 {
 printf("Tree Error\n");
 return;
 }
 while(1)
 {
  while(p->left!=NULL)
  {
   push(p);
   p=p->left;
   }
   if(p->right==NULL)
   {
   pop();
   printf("%d",p->a);
   }
   else
   while(p->right!=NULL)
   {
    push(p);
    p=p->right;
    }
    pop();
    printf("%d",p->a);
    }
    d