#include<stdio.h>
#includestdlib.h>
struct node
{
    struct node *next,*prev;
    int data;
};
struct node *header;
