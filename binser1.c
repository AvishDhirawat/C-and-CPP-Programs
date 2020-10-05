#include<stdio.h>
struct node
{
 struct node *lc,*rc;
 int a;
};
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
 if(root = NULL)
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
    create(10);
    create(20);
    create(40);
    create(25);
    printf("\nTree is = ");
    display(root);
    insert(30);
    printf("\nTree After Insertion = ");
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
    struct node *parent=NULL,*t1;
    if(tmp==NULL)
        return;
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
    if(parent == NULL)
    {
        if(tmp->lc!=NULL&&tmp-> rc!=NULL)
        {
            t1=tmp->rc;
            while(t1->lc!=NULL)
            {
                parent=t1;
                t1=t1->lc;
            }

        }
    }
}
