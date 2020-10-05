#include<stdio.h>
#include<stdlib.h>
struct node
{
    int a;
    struct node *p;
}
void sortlist()
{
    struct node *temp,*t1;
    int data;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data = ");
    scanf("%d",&data);
    temp -> a=data;
    temp -> p=NULL;
    if(header)
}
