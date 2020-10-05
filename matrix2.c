#include<stdio.h>
void main()
{
    int arr1[10][10],arr2[10][10],arr3[10][10],i,j,m,n;
    printf("\nEnter The Number of Rows and Columns of First Matrix Respectively : ");
    scanf("%d %d",&m,&n);
    printf("\nEnter the Data : );
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            {
                scanf("%d",arr1[i][j]);
            }
    }
    printf("\nEnter The Number of Rows and Columns of Second Matrix Respectively : ");
    scanf("%d %d",&m,&n);
    printf("\nEnter the Data : );
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",arr2[i][j]);
    printf("\nEntered Data for Matrix 1 = \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    printf("\nEntered Data for Matrix 2 = \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            arr3[i][j]=arr1[i][j]+arr2[i][j];
    printf("\n Matrix After Addition of Data = \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
    return;
}
