#include<stdio.h>
#include<stdlib.h>
struct node
{
 struct node *lc,*rc;
 int a;
};
void del_val(int);
struct node *root;
void insert(int );
void display(struct node *);
struct node *create (int );
void insert(int t)
{
struct node *t1 = root, *present , *temp;
t1 = (struct node *)malloc(sizeof (struct node));
t1 -> a = t;
t1 -> lc = t1 -> rc = NULL;
 if(root == NULL)
 {
     root = t1;
     return;
 }
 else
 {
     temp = root;
     present = temp;
     while(temp != NULL)
     {
	 if(temp -> a > t)
	 {
	     present = temp;
	     temp = temp -> lc;
	 }
	 else{
	    if(temp-> a < t)
	     {
		 present = temp;
		 temp = temp -> rc;
	     }
	     else{
		printf("\n Duplicate Node \n");
		return;
	     }
	 }
     }
     if(present -> a < t)
	present -> rc = t1;
     else
	present -> lc = t1;
 }
}
int main()
{
    root = create(20);
    root -> lc = create(10);
    root -> lc->lc = create(5);
    root -> rc = create(25);
    root ->rc ->rc=create(40);
    printf("\nTree is = ");
    display(root);
    printf("\nTree After Insertion = ");
    insert(30);
    display(root);
    printf("\nTree After Deletion = ");
    del_val(20);
    display(root);
    return 0;
}
struct node *create(int t)
{
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp -> a=t;
    tmp -> lc=tmp->rc=NULL;
    return tmp;
};
void display(struct node *p)
{
    if(p==NULL)
	return;
    display(p->lc);
    printf("\t %d",p->a);
    display(p->rc);
}
void del_val(int t)
{
    struct node *tmp=root;
    struct node *parent,*t1;
    if(tmp==NULL)
	return;
	parent=NULL;
    while(tmp!=NULL)
    {
	if(tmp->a==t)
	    break;
	parent = tmp;
	if(tmp->a>t)
	    tmp=tmp->lc;
	else
	    tmp=tmp->rc;
    }
    if(tmp==NULL)
    {
	printf("\nElement Do Not Exist\n");
	return;
    }
    if((tmp->lc!=NULL)&&(tmp-> rc!=NULL))
    {
	parent=tmp;
	t1=tmp->rc;
	while(t1->lc!=NULL)
	{
	    parent=t1;
	    t1=t1->lc;
	}
	tmp->a=t1->a;
	if(t1->rc!=NULL)
	    parent->lc=t1->rc;
	else
	    parent->lc=NULL;
	return;
    }
	if(tmp->lc!=NULL)
	{
	    if(parent->lc==tmp)
	    {
		parent->lc=tmp->lc;
		return;
	    }
	    else
	    {
		parent->rc=tmp->lc;
		return;
	    }
	}
	if(tmp->rc!=NULL)
	{
	    if(parent->lc==tmp)
	    {
		parent->lc=tmp->rc;
		return;
	    }
	    else
	    {
		parent->rc=tmp->rc;
		return;
	    }
	}
	if(parent->lc==tmp)
	    parent->lc=NULL;
	else
	    parent->rc=NULL;
}
