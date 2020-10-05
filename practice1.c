#include<stdio.h>
#include<stdlib.h>
struct node
{
 struct node * p;
 int a;
};
struct node *header=NULL;
struct node *footer;
void create();
void create_rev();
void rev();
void show();
void dfirst();
void dlast();
void dall();
void find_element();
void create()
{
    struct node *temp;
    temp = (struct node *) malloc (sizeof(struct node));
    printf("Enter Value : ");
    scanf("%d",&(temp->a));
    temp->p=header;
    header = temp;
}
void create_rev()
{
    struct node *temp;
    temp = (struct node *) malloc (sizeof(struct node));
    printf("\nEnter the Data : ");
    scanf("%d",&(temp->a));
    if(header==NULL)
    {
        header = temp;
        temp->p=NULL;
        footer=temp;
    }
    else
    {
        footer->p=temp;
        footer=footer->p;
        temp->p=NULL;
    }
}
void reverse(int n)
{
    struct node *temp=header,*p1,*p2;
    p1 = NULL;
    if(header==NULL)
    {
        printf("\nReverse Undone\nCreate A List First\n");
    }
    else
    {
    while(temp!=NULL)
    {
	    p2 =temp->p;
	    temp->p=p1;
	    p1=temp;
	    temp =p2;
    }
    printf("List Reversed\n");
    header =p1;
}
}
void dfirst()
{
    struct node *temp;
    temp = header;
    if (header==NULL)

    {
        printf("\nDeletion Not Possible!!!\n");
        return;
    }
    else
        header=temp->p;
    printf("\nDeletion Successful!!!\nDeleted Item is = %d\n",temp->a);
    temp=temp->p;
    if(temp->p=NULL)
        printf("\nOnly Remaining Element Deleted\n");
}
void dlast()
{
    struct node *temp=header,*prev;
    if(header==NULL)
    {
        printf("\nDeletion Not Possible!!!\n");
        return;
    }
    prev = temp;
    if(prev->p==NULL)
    {
        header = NULL;
        printf("\nDeletion Successful!!!\nOnly Remaining Element Deleted \nDeleted Item is = %d\n",prev->a);
	    return;
    }
    else
    {
        while(temp->p!=NULL)
        {
            prev = temp;
            temp = temp->p;
        }
        prev->p=NULL;
        printf("\nDeletion Successful!!!\nDeleted Item is = %d\n",temp->a);
    }
}
void show()
{
    struct node *temp = header;
    if(header==NULL)
    {
        printf("\nList Empty\nCreate a List First\n");
        return;
    }
    while(temp!=NULL)
    {
        printf("\t->%d\n",temp->a);
        temp=temp->p;
        if(temp==NULL)
            printf("End of List\n");
    }
}
void dall()
{
    header = NULL;
    printf("\nList Emptied\n");
}
void find_element()
{
    struct node *temp;
    temp = header;
    int element,count=0;
    if(header == NULL)
    {
        printf("\nCan't Perform Search\nCreate A List First\n");
        return;
    }
    else
    {
        printf("\nEnter the Element You are Looking for : ");
        scanf("%d",element);
        while(temp != NULL)
        {
            if(temp->a==element)
            {
                printf("Element is Present in List at Position %d",count+1);
                return;
            }
            else
                count = count++;
        }
    }
}
void main()
{
    int i,n,c;
while(1)
{
    options:
    printf("\n 1. Create Reverse\n 2. Create in Order\n 3. Reverse\n 4. Show\n 5. Delete First Element\n 6. Delete Last Element\n 7. Clear the List\n 8. Search a Element\n 9. Exit\n Select a Choice : ");
    scanf("%d",&c);
switch(c)
{
case 1:
    {
    printf("\nEnter the Number of Nodes to Create : ");
    scanf("%d",&n);
    printf("\nEnter the Elements \n" );
    for(i=0;i<n;i++)
        create();
    goto options;
    }
case 2:
    {
    header = NULL;
    printf("\nEnter Number of Nodes for Creating List : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        create_rev();
    goto options;
    }
case 3:
    {
    reverse(n);
    goto options;
    }
case 4:
    {
    show();
    goto options;
    }
case 5:
    {
        dfirst();
        goto options;
    }
case 6:
    {
        dlast();
        goto options;
    }
case 7:
    {
        dall();
        goto options;
    }
case 8:

    {
        find_element();
        goto options;
    }
case 9:
    {
        printf("\nExiting.....\n");
        exit(0);
    }
default:
    {
        printf("\nInvalid Choice\n Please Try Again \n");
        goto options;
    }
}
}
    getch();
}
