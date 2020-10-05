#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{
int c;
struct node *p;
int e;
};
int main()
{
    int i,j,k,m,n,b;
    struct poly p1[10];
    struct poly p2[10],p3[20];
    clescr();
    printf("\n Enter No of terms for Poly 1 : ");
    printf("\n Enter No of terms for Poly 2 : ");
    for (i-0;i<m;i++)
    {
        pritnf("\n Enter the Expo : ");
        scanf("%d",&p1[i].e);
        printf("\n Enter the Coff : ");
        scanf("%d",&p1[i].c);
    }
    for(j=0;j<n;j++)
    {
        printf("\nEnter the Expo : ");
        scanf("%d",&p2[j].e);
        printf("\nEnter the Coff : ");
        scanf("%d",&p2[j].c);
        printf("\n");
    }
    printf
}
