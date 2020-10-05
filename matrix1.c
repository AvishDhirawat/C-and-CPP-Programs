#include<stdio.h>
#include<stdlib.h>
struct node
{
    node *row,*column;
    int value;
};
node *construct (int arr[][3],int i,int j,int m,int n)
{
    if((i>n-1)||(j>m-1))
        return NULL;
    node *temp = new node();
    temp->value=arr[i][j];
    temp->row=construct(arr,i,j+1,m,n);
    temp->column=construct(arr,i+1,j,m,n);
    return temp;
};
void display(struct node *head)
{
    struct node *rp;
    struct node *dp=head;
    while(dp)
    {
        rp=dp;
    while(rp)
    {
        printf("%d",rp->value);
        printf(" ");
        rp = rp->row;
    }
    printf("\n");
    dp = dp->column;
    }
}
int main()
{
    int arr[][3] = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
                    };
    int m = 3, n = 3;
    node *head = construct(arr,0,m,n);
    display(head);
    return 0;
}
